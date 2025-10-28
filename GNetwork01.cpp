#include "gxdheader.h"

NETWORK mNETWORK;

BOOL NETWORK::Init()
{
    WSADATA mWsaData;
    ZeroMemory(&mWsaData, sizeof(mWsaData));
    if (WSAStartup(MAKEWORD(2, 2), &mWsaData))
    {
        return FALSE;
    }
    mCheckInitForNetwork = TRUE;
    mCheckConnectState = 0;
    mSocket = INVALID_SOCKET;
    return TRUE;
}
void NETWORK::Free()
{
    if (mCheckConnectState)
    {
        mCheckConnectState = FALSE;
        closesocket(mSocket);
        mSocket = INVALID_SOCKET;
    }
    if (mCheckInitForNetwork)
    {
        WSACleanup();
    }
}
void NETWORK::CLOSE()
{
    if (!mCheckConnectState)
    {
        return;
    }
    mCheckConnectState = FALSE;
    closesocket(mSocket);
    mSocket = INVALID_SOCKET;
}
void NETWORK::PROCESS_FOR_NETWORK(WPARAM wPrm, LPARAM lPrm)
{
    int tRecvSize;
    BYTE tProtocol;

    switch (WSAGETSELECTEVENT(lPrm))
    {
    case FD_READ:
        tRecvSize = recv(mSocket, &mBuffer[mTotalRecvSize], (MAX_RECV_BUFFER_SIZE - mTotalRecvSize), 0);
        if (tRecvSize <= 0)
        {
            if (tRecvSize == SOCKET_ERROR)
            {
                if (WSAGetLastError() == WSAEWOULDBLOCK)
                {
                    return;
                }
            }
            CLOSE();
            return;
        }
        mTotalRecvSize += tRecvSize;
        while (TRUE)
        {
            if (mTotalRecvSize < 1)
            {
                return;
            }
            tProtocol = (BYTE)mBuffer[0];
            if (mTotalRecvSize < mWORK[0].mWorkerFunctionSize[tProtocol])
            {
                return;
            }
            if (mWORK[0].W_FUNCTION[tProtocol].PROC == NULL)
            {
                mTotalRecvSize = 0;
                break;
            }
            mWORK[0].W_FUNCTION[tProtocol].PROC();
            if (mTotalRecvSize >= mWORK[0].mWorkerFunctionSize[tProtocol])
            {
                MoveMemory(&mBuffer[0], &mBuffer[mWORK[0].mWorkerFunctionSize[tProtocol]], mTotalRecvSize - mWORK[0].mWorkerFunctionSize[tProtocol]);
                mTotalRecvSize -= mWORK[0].mWorkerFunctionSize[tProtocol];
            }
            if (mTotalRecvSize == 0)
            {
                break;
            }
        }
        return;

    case FD_CLOSE:
        CLOSE();
        return;
    }
}
void NETWORK::CONNECT_1(char* tIP, int tPort, int* tResult)
{
    int tRecvSize = 0;
    int tTotalRecvSize = 0;
    int index01;
    int mResult;

    if (mCheckConnectState)
    {
        *tResult = 1;
        return;
    }
    mSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (mSocket == INVALID_SOCKET)
    {
        *tResult = 2;
        return;
    }
    mAddress.sin_family = AF_INET;
    mAddress.sin_addr.s_addr = inet_addr(tIP);
    mAddress.sin_port = htons(tPort);

    if (connect(mSocket, (LPSOCKADDR)&mAddress, sizeof(mAddress)) == SOCKET_ERROR)
    {
        if (WSAGetLastError() != WSAECONNREFUSED && WSAGetLastError() != WSAENETUNREACH && WSAGetLastError() != WSAETIMEDOUT)
        {
            closesocket(mSocket);
            *tResult = 3;
            return;
        }
        closesocket(mSocket);
        return;
    }

    while (TRUE)
    {
        tRecvSize = recv(mSocket, &mBuffer[tTotalRecvSize], 200000 - tTotalRecvSize, 0);
        if (tRecvSize <= 0)
        {
            closesocket(mSocket);
            *tResult = 4;
            return;
        }
        tTotalRecvSize += tRecvSize;
        if (tTotalRecvSize == 17)
        {
            break;
        }
    }
    mPacketEncryption[0] = mBuffer[1];
    mPacketEncryption[1] = mBuffer[1];
    mPacketEncryption[1] += 127;
    mCheckConnectState = TRUE;
    mTotalRecvSize = 0;
    *tResult = 0;
}
void NETWORK::CONNECT_2(char* tIP, int tPort, int* tResult)
{
    SOCKET tSocket;
    SOCKADDR_IN tAddress;
    int tRecvSize = 0;
    int tTotalRecvSize = 0;
    char tPacketEncrypt[2];
    char mBuffer[1000];
    int tSendSize = 0;
    int tSendValue = 0;
    int tTotalSendValue = 0;
    int index01;
    int tZoneResult;


    if (!mCheckConnectState)
    {
        *tResult = 1;
        return;
    }
    tSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (tSocket == INVALID_SOCKET)
    {
        *tResult = 2;
        return;
    }
    tAddress.sin_family = AF_INET;
    tAddress.sin_addr.s_addr = inet_addr(tIP);
    tAddress.sin_port = htons(tPort);

    if ( connect(tSocket, (LPSOCKADDR)&tAddress, sizeof(tAddress)) == SOCKET_ERROR )
    {
        if (WSAGetLastError() != WSAECONNREFUSED && WSAGetLastError() != WSAENETUNREACH && WSAGetLastError() != WSAETIMEDOUT)
        {
            closesocket(mSocket);
            *tResult = 3;
            return;
        }
    }

    while (TRUE)
    {
        tRecvSize = recv(tSocket, &mNETWORK.mBuffer[0], 200000 - tTotalRecvSize, 0);
        if (tRecvSize <= 0)
        {
            *tResult = 4;
            closesocket(tSocket);
            return;
        }
        tTotalRecvSize += tRecvSize;
        if (tTotalRecvSize == 5)
        {
            break;
        }
    }
    tPacketEncrypt[0] = mNETWORK.mBuffer[1];
    tPacketEncrypt[1] = mNETWORK.mBuffer[1];
    tPacketEncrypt[1] += 127;

    mBuffer[7] = tPacketEncrypt[1];
    mBuffer[8] = 11;
    CopyMemory(&mBuffer[9], &mMYINFO.uID, MAX_USER_ID_LENGTH);
    CopyMemory(&mBuffer[9 + MAX_USER_ID_LENGTH], &mMYINFO.mAvatarInfo.aTribe, 4);
    tSendSize = 27;

    for (index01 = 0; index01 < tSendSize; index01++)
    {
        mBuffer[index01] ^= tPacketEncrypt[0];
    }
    while (tSendSize > 0)
    {
        tSendValue = send(tSocket, &mBuffer[tTotalSendValue], tSendSize, 0);
        if (tSendValue == SOCKET_ERROR)
        {
            closesocket(tSocket);
            *tResult = 2;
            return;
        }
        tSendSize -= tSendValue;
        tTotalSendValue += tSendValue;
    }
    tPacketEncrypt[1]++;

    tRecvSize = 0;
    tTotalRecvSize = 0;

    while (TRUE)
    {
        tRecvSize = recv(tSocket, &mNETWORK.mBuffer[tTotalRecvSize], 200000 - tTotalRecvSize, 0);
        if (tRecvSize <= 0)
        {
            closesocket(tSocket);
            *tResult = 2;
            return;
        }
        tTotalRecvSize += tRecvSize;
        if (tTotalRecvSize == 5)
        {
            break;
        }
    }
    CopyMemory(&tZoneResult, &mNETWORK.mBuffer[1], 4);
    switch (tZoneResult)
    {
    case 0:
        if (WSAAsyncSelect(tSocket, mAPP[0].hMainWindow, (WM_USER + 1), FD_READ | FD_CLOSE) == -1)
        {
            closesocket(tSocket);
            *tResult = 6;
        }
        mPacketEncryption[0] = tPacketEncrypt[0];
        mPacketEncryption[1] = tPacketEncrypt[1];
        closesocket(mSocket);
        mSocket = tSocket;
        CopyMemory(&mAddress, &tAddress, sizeof(SOCKADDR_IN));
        mTotalRecvSize = 0;
        *tResult = 0;
        return;

    case 1:
        closesocket(tSocket);
        *tResult = 5;
        return;

    default:
        closesocket(tSocket);
        *tResult = 7;
        return;
    }
}
u_short NETWORK::InChkSum(u_short* p, int n)
{
    u_short odd_byte = 0;
    register long sum = 0;
    register u_short answer;

    while (n > 1) 
    {
        sum += *p++;
        n -= 2;
    }

    if (n == 1)
    {
        *(u_char*)(&odd_byte) = *(u_char*)p;
        sum += odd_byte;
    }

    sum = (sum >> 16) + (sum & 0xffff);
    sum += (sum >> 16);
    answer = (USHORT)~sum;

    return answer;
}
int NETWORK::PingToHost(char* ip_addr, int TimeoutSec)
{
    fd_set rfds;
    WSADATA wsaData;
    int ret_val = 0;
    char buffer[512];
    SOCKET icmp_socket;
    SOCKADDR_STORAGE dest;
    ICMP_HDR* icmp = NULL;
    struct timeval waitTime;
    char buf[sizeof(ICMP_HDR) + 32];

    icmp = (ICMP_HDR*)buf;
    icmp->icmp_type = 8;
    icmp->icmp_code = 0;
    icmp->icmp_id = (unsigned short)GetCurrentProcessId();
    icmp->icmp_checksum = 0;
    icmp->icmp_sequence = 0;
    icmp->icmp_timestamp = GetTickCount();
    memset(&buf[sizeof(ICMP_HDR)], '@', 32);
    icmp->icmp_checksum = InChkSum((u_short*)buf, sizeof(ICMP_HDR) + 32);

    if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0)
    {
        return -1;
    }

    icmp_socket = socket(AF_INET, SOCK_RAW, IPPROTO_ICMP);
    if (icmp_socket == SOCKET_ERROR) 
    {
        WSACleanup();
        return -2;
    }

    ((SOCKADDR_IN*)&dest)->sin_family = AF_INET;
    ((SOCKADDR_IN*)&dest)->sin_port = htons(0);
    ((SOCKADDR_IN*)&dest)->sin_addr.S_un.S_addr = inet_addr(ip_addr);

    FD_ZERO(&rfds);
    FD_SET(icmp_socket, &rfds);
    waitTime.tv_sec = TimeoutSec;
    waitTime.tv_usec = 0;

    if (sendto(icmp_socket, buf, sizeof(ICMP_HDR) + 32, 0, (SOCKADDR*)&dest, sizeof(dest)) < 0) 
    {
        closesocket(icmp_socket);
        WSACleanup();
        return -3;
    }

    ret_val = select(icmp_socket + 1, &rfds, NULL, NULL, &waitTime);
    if (ret_val == 0) 
    {
        closesocket(icmp_socket);
        WSACleanup();
        return -4;
    }
    else if (ret_val < 0)
    {
        closesocket(icmp_socket);
        WSACleanup();
        return -4;
    }
    else 
    {
        if (FD_ISSET(icmp_socket, &rfds)) 
        {
            ret_val = sizeof(dest);
            if (recvfrom(icmp_socket, buffer, 512, 0, (SOCKADDR*)&dest, &ret_val) > 0) 
            {
                closesocket(icmp_socket);
                WSACleanup();
                return (GetTickCount() - icmp->icmp_timestamp);
            }
            else 
            {
                closesocket(icmp_socket);
                WSACleanup();
                return -5;
            }
        }
        else 
        {
            closesocket(icmp_socket);
            WSACleanup();
            return -6;
        }
    }

    closesocket(icmp_socket);
    WSACleanup();

    return -7;
}