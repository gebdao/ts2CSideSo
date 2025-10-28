#include "gxdheader.h"

TRANSFER mTRANSFER;


BOOL TRANSFER::Init()
{
	return TRUE;
}

BOOL TRANSFER::T_REGISTER_AVATAR_SEND(char* tID, char* tAvatarName, ACTION_INFO* tAction)
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_REGISTER_AVATAR_SEND;
	CopyMemory(&mBuffer[9], tID, MAX_USER_ID_LENGTH);
	CopyMemory(&mBuffer[9 + MAX_USER_ID_LENGTH], tAvatarName, MAX_AVATAR_NAME_LENGTH);
	CopyMemory(&mBuffer[9 + MAX_USER_ID_LENGTH + MAX_AVATAR_NAME_LENGTH], tAction, sizeof(ACTION_INFO));
	mBufferSize = S_REGISTER_AVATAR_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_CLIENT_OK_FOR_ZONE_SEND( int tTribe, int tZoneNumber )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_CLIENT_OK_FOR_ZONE_SEND;
	CopyMemory(&mBuffer[9], &tTribe, 4);
	CopyMemory(&mBuffer[13], &tZoneNumber, 4);
	mBufferSize = S_CLIENT_OK_FOR_ZONE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_IMPROVE_ITEM_SEND(int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2)
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = 24;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &tPage1, 4);
	CopyMemory(&mBuffer[17], &tIndex1, 4);
	CopyMemory(&mBuffer[21], &tPage2, 4);
	CopyMemory(&mBuffer[25], &tIndex2, 4);
	mBufferSize = 29;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_USE_INVENTORY_ITEM_SEND(int tPage, int tIndex, int tValue)
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = 23;
	CopyMemory(&mBuffer[9], &tPage, 4);
	CopyMemory(&mBuffer[13], &tIndex, 4);
	CopyMemory(&mBuffer[17], &tValue, 4);
	mBufferSize = 21;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_AVATAR_ACTION_SEND( ACTION_INFO* tAction )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = 15;
	CopyMemory(&mBuffer[9], tAction, sizeof(ACTION_INFO));
	mBufferSize = 81;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_UPDATE_AVATAR_ACTION( ACTION_INFO* tAction )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = 16;
	CopyMemory(&mBuffer[9], tAction, sizeof(ACTION_INFO));
	mBufferSize = 81;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_GENERAL_NOTICE_SEND( char* tMessage )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_GENERAL_NOTICE_SEND;
	CopyMemory(&mBuffer[9], tMessage, 61);
	mBufferSize = S_GENERAL_NOTICE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_PROCESS_ATTACK_SEND( ATTACK_FOR_PROTOCOL* tAttackInfo )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_PROCESS_ATTACK_SEND;
	CopyMemory(&mBuffer[9], tAttackInfo, sizeof(ATTACK_FOR_PROTOCOL));
	mBufferSize = S_PROCESS_ATTACK_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_PROCESS_DATA_SEND(int tSort, BYTE tData[100])
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_PROCESS_DATA_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], tData, 100);
	mBufferSize = S_PROCESS_DATA_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_TRIBE_WORK_SEND(int tSort, BYTE tData[100])
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_TRIBE_WORK_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &tData[0], 100);
	mBufferSize = S_TRIBE_WORK_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_END_PSHOP_SEND(int tSort)
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_END_PSHOP_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	mBufferSize = S_END_PSHOP_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_PSHOP_ITEM_INFO_SEND(int tValue1, int tValue2)
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_PSHOP_ITEM_INFO_SEND;
	CopyMemory(&mBuffer[9], &tValue1, 4);
	CopyMemory(&mBuffer[13], &tValue2, 4);
	mBufferSize = S_PSHOP_ITEM_INFO_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_DAILY_MISSION_SEND(int tSort, int tPage, int tIndex, int tXPost, int tYPost)
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_DAILY_MISSION_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &tPage, 4);
	CopyMemory(&mBuffer[17], &tIndex, 4);
	CopyMemory(&mBuffer[21], &tXPost, 4);
	CopyMemory(&mBuffer[25], &tYPost, 4);
	mBufferSize = S_DAILY_MISSION_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_CLOAK_UPGRADE_SEND( int tPage1, int tIndex1, int tPage2, int tIndex2 )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_CLOAK_UPGRADE_SEND;
	CopyMemory(&mBuffer[9], &tPage1, 4);
	CopyMemory(&mBuffer[13], &tIndex1, 4);
	CopyMemory(&mBuffer[17], &tPage2, 4);
	CopyMemory(&mBuffer[21], &tIndex2, 4);
	mBufferSize = S_CLOAK_UPGRADE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_MAKE_ITEM_SEND(int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2, int tPage3, int tIndex3, int tPage4, int tIndex4)
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_MAKE_ITEM_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &tPage1, 4);
	CopyMemory(&mBuffer[17], &tIndex1, 4);
	CopyMemory(&mBuffer[21], &tPage2, 4);
	CopyMemory(&mBuffer[25], &tIndex2, 4);
	CopyMemory(&mBuffer[29], &tPage3, 4);
	CopyMemory(&mBuffer[33], &tIndex3, 4);
	CopyMemory(&mBuffer[37], &tPage4, 4);
	CopyMemory(&mBuffer[41], &tIndex4, 4);
	mBufferSize = S_MAKE_ITEM_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_SOCKET_ITEM_SEND(int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2)
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_SOCKET_ITEM_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &tPage1, 4);
	CopyMemory(&mBuffer[17], &tIndex1, 4);
	CopyMemory(&mBuffer[21], &tPage2, 4);
	CopyMemory(&mBuffer[25], &tIndex2, 4);
	mBufferSize = S_SOCKET_ITEM_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_TRIBE_BANK_SEND(int tSort, int tBankIndex)
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_TRIBE_BANK_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &tBankIndex, 4);
	mBufferSize = S_TRIBE_BANK_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_CHAR_RANK_BUFF_SEND(int tAbilityIndex)
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_CHAR_RANK_BUFF_SEND;
	CopyMemory(&mBuffer[9], &tAbilityIndex, 4);
	mBufferSize = S_CHAR_RANK_BUFF_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_GUILD_FIND_SEND(char* tString)
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_GUILD_FIND_SEND;
	CopyMemory(&mBuffer[9], tString, 13);
	mBufferSize = S_GUILD_FIND_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_GUILD_NOTICE_SEND(char* tString)
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_GUILD_NOTICE_SEND;
	CopyMemory(&mBuffer[9], tString, 61);
	mBufferSize = S_GUILD_NOTICE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_GUILD_WORK_SEND(int tSort, BYTE tData[500])
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_GUILD_WORK_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &tData[0], 500);
	mBufferSize = S_GUILD_WORK_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_DEMAND_PSHOP_SEND(char* tAvtName)
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_DEMAND_PSHOP_SEND;
	CopyMemory(&mBuffer[9], tAvtName, 13);
	mBufferSize = S_DEMAND_PSHOP_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_GET_DEPUTY_PSHOP_SEND(int tSort, int mUniqueNumber, char* tAvtName)
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_GET_DEPUTY_PSHOP_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &mUniqueNumber, 4);
	CopyMemory(&mBuffer[17], tAvtName, 13);
	mBufferSize = S_GET_DEPUTY_PSHOP_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_TRIBE_NOTICE_SEND(char* tString)
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_TRIBE_NOTICE_SEND;
	CopyMemory(&mBuffer[9], tString, 61);
	mBufferSize = S_TRIBE_NOTICE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_ANIMAL_STATE_SEND(int tSort, int tValue)
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_ANIMAL_STATE_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &tValue, 4);
	mBufferSize = S_ANIMAL_STATE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_PET_COMBINE_SEND(int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2, int tPage3, int tIndex3, int tPage4, int tIndex4)// W_PET_COMBINE_SEND
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_PET_COMBINE_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &tPage1, 4);
	CopyMemory(&mBuffer[17], &tIndex1, 4);
	CopyMemory(&mBuffer[21], &tPage2, 4);
	CopyMemory(&mBuffer[25], &tIndex2, 4);
	CopyMemory(&mBuffer[29], &tPage3, 4);
	CopyMemory(&mBuffer[33], &tIndex3, 4);
	CopyMemory(&mBuffer[37], &tPage4, 4);
	CopyMemory(&mBuffer[41], &tIndex4, 4);
	mBufferSize = S_PET_COMBINE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if (tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_DESTROY_ITEM_SEND( int tPage, int tIndex )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_DESTROY_ITEM_SEND;
	CopyMemory(&mBuffer[9], &tPage, 4);
	CopyMemory(&mBuffer[13], &tIndex, 4);
	mBufferSize = S_DESTROY_ITEM_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if (tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_COMBINE_G12_PET_SEND(int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2, int tPage3, int tIndex3, int tPage4, int tIndex4)// W_AMULET_COMBINE_SEND
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_COMBINE_G12_PET_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &tPage1, 4);
	CopyMemory(&mBuffer[17], &tIndex1, 4);
	CopyMemory(&mBuffer[21], &tPage2, 4);
	CopyMemory(&mBuffer[25], &tIndex2, 4);
	CopyMemory(&mBuffer[29], &tPage3, 4);
	CopyMemory(&mBuffer[33], &tIndex3, 4);
	CopyMemory(&mBuffer[37], &tPage4, 4);
	CopyMemory(&mBuffer[41], &tIndex4, 4);
	mBufferSize = S_COMBINE_G12_PET_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if (tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_AMULET_COMBINE_SEND(int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2, int tPage3, int tIndex3, int tPage4, int tIndex4)// W_AMULET_COMBINE_SEND
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_AMULET_COMBINE_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &tPage1, 4);
	CopyMemory(&mBuffer[17], &tIndex1, 4);
	CopyMemory(&mBuffer[21], &tPage2, 4);
	CopyMemory(&mBuffer[25], &tIndex2, 4);
	CopyMemory(&mBuffer[29], &tPage3, 4);
	CopyMemory(&mBuffer[33], &tIndex3, 4);
	CopyMemory(&mBuffer[37], &tPage4, 4);
	CopyMemory(&mBuffer[41], &tIndex4, 4);
	mBufferSize = S_AMULET_COMBINE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if (tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_COSTUME_STATE_SEND(int tSort, int tValue)
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_COSTUME_STATE_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &tValue, 4);
	mBufferSize = S_COSTUME_STATE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_FACTION_NOTICE_SEND(char* tString)
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_FACTION_NOTICE_SEND;
	CopyMemory(&mBuffer[9], tString, 61);
	mBufferSize = S_FACTION_NOTICE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_DEMAND_BLOODSTAINED_INFO_SEND()
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_DEMAND_BLOODSTAINED_INFO_SEND;
	mBufferSize = S_DEMAND_BLOODSTAINED_INFO_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_GET_CASH_ITEM_INFO_SEND()
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_GET_CASH_ITEM_INFO_SEND;
	mBufferSize = S_GET_CASH_ITEM_INFO_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_SKY_UP_ITEM_SEND( int tPage1, int tIndex1, int tPage2, int tIndex2 )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_SKY_UP_ITEM_SEND;
	CopyMemory(&mBuffer[9], &tPage1, 4);
	CopyMemory(&mBuffer[13], &tIndex1, 4);
	CopyMemory(&mBuffer[17], &tPage2, 4);
	CopyMemory(&mBuffer[21], &tIndex2, 4);
	mBufferSize = S_SKY_UP_ITEM_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_TIME_EFFECT_SEND(int tValue)
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_TIME_EFFECT_SEND;
	CopyMemory(&mBuffer[9], &tValue, 4);
	mBufferSize = S_TIME_EFFECT_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_GET_CASH_SIZE_SEND(int tSort)
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_GET_CASH_SIZE_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	mBufferSize = S_GET_CASH_SIZE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_DEMAND_ZONE_SERVER_INFO_2(int tSort, int tZoneNum )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_DEMAND_ZONE_SERVER_INFO_2;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &tZoneNum, 4);
	mBufferSize = S_DEMAND_ZONE_SERVER_INFO_2;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_FAIL_MOVE_ZONE_2_SEND( )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_FAIL_MOVE_ZONE_2_SEND;
	mBufferSize = S_FAIL_MOVE_ZONE_2_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_DUEL_CANCEL_SEND( )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_DUEL_CANCEL_SEND;
	mBufferSize = S_DUEL_CANCEL_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_TRADE_CANCEL_SEND( )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_TRADE_CANCEL_SEND;
	mBufferSize = S_TRADE_CANCEL_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_TRADE_ANSWER_SEND( int tAnswer )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_TRADE_ANSWER_SEND;
	CopyMemory(&mBuffer[9], &tAnswer, 4);
	mBufferSize = S_TRADE_ANSWER_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_TRADE_START_SEND( )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_TRADE_START_SEND;
	mBufferSize = S_TRADE_START_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_FRIEND_CANCEL_SEND( )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_FRIEND_CANCEL_SEND;
	mBufferSize = S_FRIEND_CANCEL_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_FRIEND_DELETE_SEND( int tFriendIndex )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_FRIEND_DELETE_SEND;
	CopyMemory(&mBuffer[9], &tFriendIndex, 4);
	mBufferSize = S_FRIEND_DELETE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_PARTY_CANCEL_SEND( )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_PARTY_CANCEL_SEND;
	mBufferSize = S_PARTY_CANCEL_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_PARTY_ANSWER_SEND( int tAnswer )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_PARTY_ANSWER_SEND;
	CopyMemory(&mBuffer[9], &tAnswer, 4);
	mBufferSize = S_PARTY_ANSWER_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_PARTY_LEAVE_SEND( )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_PARTY_LEAVE_SEND;
	mBufferSize = S_PARTY_LEAVE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_PARTY_BREAK_SEND( )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_PARTY_BREAK_SEND;
	mBufferSize = S_PARTY_BREAK_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_PARTY_EXILE_SEND( char* tAvtName )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_PARTY_EXILE_SEND;
	CopyMemory(&mBuffer[9], tAvtName, MAX_AVATAR_NAME_LENGTH);
	mBufferSize = S_PARTY_EXILE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_PARTY_MAKE_SEND( )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_PARTY_MAKE_SEND;
	mBufferSize = S_PARTY_MAKE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_PARTY_JOIN_SEND( )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_PARTY_JOIN_SEND;
	mBufferSize = S_PARTY_JOIN_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_GUILD_CANCEL_SEND( )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_GUILD_CANCEL_SEND;
	mBufferSize = S_GUILD_CANCEL_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_TEACHER_CANCEL_SEND( )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_TEACHER_CANCEL_SEND;
	mBufferSize = S_TEACHER_CANCEL_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_TEACHER_END_SEND( )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_TEACHER_END_SEND;
	mBufferSize = S_TEACHER_END_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_CHANGE_AUTO_INFO( int tLifeRatio, int tManaRatio )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_CHANGE_AUTO_INFO_SEND;
	CopyMemory(&mBuffer[9], &tLifeRatio, 4);
	CopyMemory(&mBuffer[13], &tManaRatio, 4);
	mBufferSize = S_CHANGE_AUTO_INFO_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_USE_HOTKEY_ITEM_SEND( int tPage, int tIndex )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_USE_HOTKEY_ITEM_SEND;
	CopyMemory(&mBuffer[9], &tPage, 4);
	CopyMemory(&mBuffer[13], &tIndex, 4);
	mBufferSize = S_USE_HOTKEY_ITEM_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_COSTUME_HIDE_SEND( int tState )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_COSTUME_HIDE_SEND;
	CopyMemory(&mBuffer[9], &tState, 4);
	mBufferSize = S_COSTUME_HIDE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_297_TYPE_CANCEL_SEND( int tZoneNum, int tTribe, char* tAvtName )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_297_TYPE_CANCEL_SEND;
	CopyMemory(&mBuffer[9], &tZoneNum, 4);
	CopyMemory(&mBuffer[13], &tTribe, 4);
	CopyMemory(&mBuffer[17], tAvtName, 13);
	mBufferSize = S_297_TYPE_CANCEL_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_TRADE_ASK_SEND( char* tAvtName )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_TRADE_ASK_SEND;
	CopyMemory(&mBuffer[9], tAvtName, 13);
	mBufferSize = S_TRADE_ASK_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_FRIEND_ASK_SEND( char* tAvtName )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_FRIEND_ASK_SEND;
	CopyMemory(&mBuffer[9], tAvtName, 13);
	mBufferSize = S_FRIEND_ASK_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_FRIEND_ANSWER_SEND( int tAnswer )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_FRIEND_ANSWER_SEND;
	CopyMemory(&mBuffer[9], &tAnswer, 4);
	mBufferSize = S_FRIEND_ANSWER_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_FRIEND_MAKE_SEND( int tIndex )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_FRIEND_MAKE_SEND;
	CopyMemory(&mBuffer[9], &tIndex, 4);
	mBufferSize = S_FRIEND_MAKE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_FRIEND_FIND_SEND( int tIndex )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_FRIEND_FIND_SEND;
	CopyMemory(&mBuffer[9], &tIndex, 4);
	mBufferSize = S_FRIEND_FIND_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_TEACHER_ASK_SEND( char* tAvtName )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_TEACHER_ASK_SEND;
	CopyMemory(&mBuffer[9], tAvtName, 13);
	mBufferSize = S_TEACHER_ASK_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_TEACHER_ANSWER_SEND( int tAnswer )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_TEACHER_ANSWER_SEND;
	CopyMemory(&mBuffer[9], &tAnswer, 4);
	mBufferSize = S_TEACHER_ANSWER_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_TEACHER_START_SEND( )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_TEACHER_START_SEND;
	mBufferSize = S_TEACHER_START_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_TEACHER_STATE_SEND( )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_TEACHER_STATE_SEND;
	mBufferSize = S_TEACHER_STATE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_GUILD_ASK_SEND( char* tAvtName )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_GUILD_ASK_SEND;
	CopyMemory(&mBuffer[9], tAvtName, 13);
	mBufferSize = S_GUILD_ASK_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_GUILD_ANSWER_SEND( int tAnswer )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_GUILD_ANSWER_SEND;
	CopyMemory(&mBuffer[9], &tAnswer, 4);
	mBufferSize = S_GUILD_ANSWER_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_PARTY_ASK_SEND( char* tAvtName )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_PARTY_ASK_SEND;
	CopyMemory(&mBuffer[9], tAvtName, 13);
	mBufferSize = S_PARTY_ASK_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_DUEL_ASK_SEND( char* tAvtName, int tSort )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_DUEL_ASK_SEND;
	CopyMemory(&mBuffer[9], tAvtName, 13);
	CopyMemory(&mBuffer[22], &tSort, 4);
	mBufferSize = S_DUEL_ASK_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_DUEL_ANSWER_SEND( int tAnswer )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_DUEL_ANSWER_SEND;
	CopyMemory(&mBuffer[9], &tAnswer, 4);
	mBufferSize = S_DUEL_ANSWER_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_DUEL_START_SEND( )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_DUEL_START_SEND;
	mBufferSize = S_DUEL_START_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_CONTINUE_SKILL_STAT_SEND(  )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_CONTINUE_SKILL_STAT_SEND;
	CopyMemory(&mBuffer[9], &mMYINFO.mAvatarInfo.aAutoBuffScrollSkillSlots, 64);
	mBufferSize = S_CONTINUE_SKILL_STAT_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_TRADE_MENU_SEND(  )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_TRADE_MENU_SEND;
	mBufferSize = S_TRADE_MENU_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_TRADE_END_SEND(  )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_TRADE_END_SEND;
	mBufferSize = S_TRADE_END_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_HERO_RANK_REWARD_CLAIM_SEND(  )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_HERO_RANK_REWARD_CLAIM_SEND;
	mBufferSize = S_HERO_RANK_REWARD_CLAIM_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_DEMAND_HERO_RANK_SEND(  )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_DEMAND_HERO_RANK_SEND;
	mBufferSize = S_DEMAND_HERO_RANK_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_AUTO_CONFIG_SEND( int tAutoState )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_AUTO_CONFIG_SEND;
	CopyMemory(&mBuffer[9], &tAutoState, 4);
	CopyMemory(&mBuffer[13], &mMYINFO.mAvatarInfo.aAutoHuntUNK, 68);
	CopyMemory(&mBuffer[81], &mMYINFO.mAvatarInfo.aStandStillOrMovingHunt, 44);
	mBufferSize = S_AUTO_CONFIG_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_START_PSHOP_SEND( int tSort, PSHOP_INFO* tPShopInfo )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_START_PSHOP_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], tPShopInfo, sizeof(PSHOP_INFO));
	mBufferSize = S_START_PSHOP_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_SET_DEPUTY_PSHOP_MONEY_SEND( int tMoney, int tMoney2 )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_SET_DEPUTY_PSHOP_MONEY_SEND;
	CopyMemory(&mBuffer[9], &tMoney, 4);
	CopyMemory(&mBuffer[13], &tMoney2, 4);
	mBufferSize = S_SET_DEPUTY_PSHOP_MONEY_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_ABSORB_STATE_SEND( int tState )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_ABSORB_STATE_SEND;
	CopyMemory(&mBuffer[9], &tState, 4);
	mBufferSize = S_ABSORB_STATE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_FRIEND_SEND( int tIndex )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_FRIEND_SEND;
	CopyMemory(&mBuffer[9], &tIndex, 4);
	mBufferSize = S_FRIEND_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_CHANGE_TO_TRIBE4_SEND( )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_CHANGE_TO_TRIBE4_SEND;
	mBufferSize = S_CHANGE_TO_TRIBE4_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_BUY_CASH_ITEM_SEND( int tItemIndex, int tPage, int tIndex, int tValue[6], int tVersion )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_BUY_CASH_ITEM_SEND;
	CopyMemory(&mBuffer[9], &tItemIndex, 4);
	CopyMemory(&mBuffer[13], &tPage, 4);
	CopyMemory(&mBuffer[17], &tIndex, 4);
	CopyMemory(&mBuffer[21], &tValue[0], 24);
	CopyMemory(&mBuffer[45], &tVersion, 4);
	mBufferSize = S_BUY_CASH_ITEM_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_TRIBE_VOTE_SEND( int tSort, int tTribeVoteIndex )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_TRIBE_VOTE_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &tTribeVoteIndex, 4);
	mBufferSize = S_TRIBE_VOTE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_SMELT_ITEM_SEND( int tPage1, int tIndex1, int tPage2, int tIndex2 )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_SMELT_ITEM_SEND;
	CopyMemory(&mBuffer[9], &tPage1, 4);
	CopyMemory(&mBuffer[13], &tIndex1, 4);
	CopyMemory(&mBuffer[17], &tPage2, 4);
	CopyMemory(&mBuffer[21], &tIndex2, 4);
	mBufferSize = S_SMELT_ITEM_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_FISHING_STATE_SEND( int tSort, float tCoordX, int tCoordZ )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_FISHING_STATE_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &tCoordX, 4);
	CopyMemory(&mBuffer[17], &tCoordZ, 4);
	mBufferSize = S_FISHING_STATE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_FISHING_RESULT_SEND( int tSort, int tFishingStep )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_FISHING_RESULT_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &tFishingStep, 4);
	mBufferSize = S_FISHING_RESULT_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_FISHING_REWARD_SEND( )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_FISHING_REWARD_SEND;
	mBufferSize = S_FISHING_REWARD_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_TRAP_CHECK_SEND( int mIndex, float tLocation[3] )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_TRAP_CHECK_SEND;
	CopyMemory(&mBuffer[9], &mIndex, 4);
	CopyMemory(&mBuffer[13], tLocation, 12);
	mBufferSize = S_TRAP_CHECK_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_BUY_CAPSULE_SEND( int tBuySort, int tPage, int tIndex, int tX, int tY )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_BUY_CAPSULE_SEND;
	CopyMemory(&mBuffer[9], &tBuySort, 4);
	CopyMemory(&mBuffer[13], &tPage, 4);
	CopyMemory(&mBuffer[17], &tIndex, 4);
	CopyMemory(&mBuffer[21], &tX, 4);
	CopyMemory(&mBuffer[25], &tY, 4);
	mBufferSize = S_BUY_CAPSULE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_TOWER_UPGRADE_SEND( int tZoneNum, int tTower1, int tTower2, int tPage, int tIndex )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_TOWER_UPGRADE_SEND;
	CopyMemory(&mBuffer[9], &tZoneNum, 4);
	CopyMemory(&mBuffer[13], &tTower1, 4);
	CopyMemory(&mBuffer[17], &tTower2, 4);
	CopyMemory(&mBuffer[21], &tPage, 4);
	CopyMemory(&mBuffer[25], &tIndex, 4);
	mBufferSize = S_TOWER_UPGRADE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_ADDITIONAL_SOCKET_SEND( int tPage1, int tIndex1, int tPage2, int tIndex2 )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_ADDITIONAL_SOCKET_SEND;
	CopyMemory(&mBuffer[9], &tPage1, 4);
	CopyMemory(&mBuffer[13], &tIndex1, 4);
	CopyMemory(&mBuffer[17], &tPage2, 4);
	CopyMemory(&mBuffer[21], &tIndex2, 4);
	mBufferSize = S_ADDITIONAL_SOCKET_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_ADD_ITEM_SEND( int tPage1, int tIndex1, int tPage2, int tIndex2 )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_ADD_ITEM_SEND;
	CopyMemory(&mBuffer[9], &tPage1, 4);
	CopyMemory(&mBuffer[13], &tIndex1, 4);
	CopyMemory(&mBuffer[17], &tPage2, 4);
	CopyMemory(&mBuffer[21], &tIndex2, 4);
	mBufferSize = S_ADD_ITEM_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_ENGRAVE_ITEM_SEND( int tPage1, int tIndex1, int tPage2, int tIndex2 )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_ENGRAVE_ITEM_SEND;
	CopyMemory(&mBuffer[9], &tPage1, 4);
	CopyMemory(&mBuffer[13], &tIndex1, 4);
	CopyMemory(&mBuffer[17], &tPage2, 4);
	CopyMemory(&mBuffer[21], &tIndex2, 4);
	mBufferSize = S_ENGRAVE_ITEM_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_BUY_BLOODSTAINED_ITEM_SEND( int tItemPage, int tItemIndex, int tPage, int tIndex, int tValue[6] )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_BUY_BLOODSTAINED_ITEM_SEND;
	CopyMemory(&mBuffer[9], &tItemPage, 4);
	CopyMemory(&mBuffer[13], &tItemIndex, 4);
	CopyMemory(&mBuffer[17], &tPage, 4);
	CopyMemory(&mBuffer[21], &tIndex, 4);
	CopyMemory(&mBuffer[25], &tValue[0], 24);
	mBufferSize = S_BUY_BLOODSTAINED_ITEM_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_EXCHANGE_ITEM_SEND( int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2 )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_EXCHANGE_ITEM_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &tPage1, 4);
	CopyMemory(&mBuffer[17], &tIndex1, 4);
	CopyMemory(&mBuffer[21], &tPage2, 4);
	CopyMemory(&mBuffer[25], &tIndex2, 4);
	mBufferSize = S_EXCHANGE_ITEM_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_HIGH_ITEM_SEND( int tPage1, int tIndex1, int tPage2, int tIndex2 )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_HIGH_ITEM_SEND;
	CopyMemory(&mBuffer[9], &tPage1, 4);
	CopyMemory(&mBuffer[13], &tIndex1, 4);
	CopyMemory(&mBuffer[17], &tPage2, 4);
	CopyMemory(&mBuffer[21], &tIndex2, 4);
	mBufferSize = S_HIGH_ITEM_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_LOW_ITEM_SEND( int tPage1, int tIndex1, int tPage2, int tIndex2 )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_LOW_ITEM_SEND;
	CopyMemory(&mBuffer[9], &tPage1, 4);
	CopyMemory(&mBuffer[13], &tIndex1, 4);
	CopyMemory(&mBuffer[17], &tPage2, 4);
	CopyMemory(&mBuffer[21], &tIndex2, 4);
	mBufferSize = S_LOW_ITEM_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_MAKE_SKILL_SEND( int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2, int tPage3, int tIndex3, int tPage4, int tIndex4 )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_MAKE_SKILL_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &tPage1, 4);
	CopyMemory(&mBuffer[17], &tIndex1, 4);
	CopyMemory(&mBuffer[21], &tPage2, 4);
	CopyMemory(&mBuffer[25], &tIndex2, 4);
	CopyMemory(&mBuffer[29], &tPage3, 4);
	CopyMemory(&mBuffer[33], &tIndex3, 4);
	CopyMemory(&mBuffer[37], &tPage4, 4);
	CopyMemory(&mBuffer[41], &tIndex4, 4);
	mBufferSize = S_MAKE_SKILL_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_SET_DEPUTY_PSHOP_SEND(int tSort, char* tPShopName, int tDeputyPage, int tDeputyIndex, int tDeputyItem, int tPage, int tIndex, int tXPost, int tYPost, int tDeputyInfo[7] )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_SET_DEPUTY_PSHOP_SEND;
	CopyMemory(&mBuffer[9], tPShopName, 13);
	CopyMemory(&mBuffer[22], &tDeputyPage, 4);
	CopyMemory(&mBuffer[26], &tDeputyIndex, 4);
	CopyMemory(&mBuffer[30], &tDeputyItem, 4);
	CopyMemory(&mBuffer[34], &tPage, 4);
	CopyMemory(&mBuffer[38], &tIndex, 4);
	CopyMemory(&mBuffer[42], &tXPost, 4);
	CopyMemory(&mBuffer[46], &tYPost, 4);
	CopyMemory(&mBuffer[50], &tSort, 4);
	CopyMemory(&mBuffer[54], &tDeputyInfo[0], 36);
	mBufferSize = S_SET_DEPUTY_PSHOP_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_BUY_PSHOP_SEND( DWORD mUniqueNumber, char *tAvtName, int tPage, int tIndex, int tQuantity, int tPage2, int tIndex2, int tXPost, int tYPost )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_BUY_PSHOP_SEND;
	CopyMemory(&mBuffer[9], &mUniqueNumber, 4);
	CopyMemory(&mBuffer[13], tAvtName, 13);
	CopyMemory(&mBuffer[26], &tPage, 4);
	CopyMemory(&mBuffer[30], &tIndex, 4);
	CopyMemory(&mBuffer[34], &tQuantity, 4);
	CopyMemory(&mBuffer[38], &tPage2, 4);
	CopyMemory(&mBuffer[42], &tIndex2, 4);
	CopyMemory(&mBuffer[46], &tXPost, 4);
	CopyMemory(&mBuffer[50], &tYPost, 4);
	mBufferSize = S_BUY_PSHOP_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_GUILD_CHAT_SEND( char* tString )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_GUILD_CHAT_SEND;
	CopyMemory(&mBuffer[9], tString, 61);
	mBufferSize = S_GUILD_CHAT_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_GENERAL_SHOUT_SEND( char* tString )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_GENERAL_SHOUT_SEND;
	CopyMemory(&mBuffer[9], tString, 61);
	mBufferSize = S_GENERAL_SHOUT_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_PARTY_CHAT_SEND( char* tString )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_PARTY_CHAT_SEND;
	CopyMemory(&mBuffer[9], tString, 61);
	mBufferSize = S_PARTY_CHAT_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_TRIBE_CHAT_SEND( char* tString )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_TRIBE_CHAT_SEND;
	CopyMemory(&mBuffer[9], tString, 61);
	mBufferSize = S_TRIBE_CHAT_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_SECRET_CHAT_SEND( char* tAvatarName, char* tString )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_SECRET_CHAT_SEND;
	CopyMemory(&mBuffer[9], tAvatarName, MAX_AVATAR_NAME_LENGTH);
	CopyMemory(&mBuffer[22], tString, 61);
	mBufferSize = S_SECRET_CHAT_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_GENERAL_CHAT_SEND( char* tString )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_GENERAL_CHAT_SEND;
	CopyMemory(&mBuffer[9], tString, 61);
	mBufferSize = S_GENERAL_CHAT_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_RAGE_SEND( )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_RAGE_SEND;
	mBufferSize = S_RAGE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_CONTINUE_SKILL_USE_SEND( int tSort )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_CONTINUE_SKILL_USE_SEND;
	CopyMemory(&mBuffer[9], &mPLAY.mAVATAR_OBJECT[0].mDATA.aAction.aLocation[0], 12);
	CopyMemory(&mBuffer[21], &tSort, 4);
	mBufferSize = S_CONTINUE_SKILL_USE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_BOOZE_DRINK_SEND( int tSort, int tBottleIndex )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_BOOZE_DRINK_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &tBottleIndex, 4);
	mBufferSize = S_BOOZE_DRINK_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_ADD_PET_ABILITY_SEND( int tPage1, int tIndex1, int tPage2, int tIndex2 )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_ADD_PET_ABILITY_SEND;
	CopyMemory(&mBuffer[9], &tPage1, 4);
	CopyMemory(&mBuffer[13], &tIndex1, 4);
	CopyMemory(&mBuffer[17], &tPage2, 4);
	CopyMemory(&mBuffer[21], &tIndex2, 4);
	mBufferSize = S_ADD_PET_ABILITY_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_LEGENDARY_UPGRADE_SEND( int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2, int tPage3, int tIndex3, int tPage4, int tIndex4 )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_LEGENDARY_UPGRADE_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &tPage1, 4);
	CopyMemory(&mBuffer[17], &tIndex1, 4);
	CopyMemory(&mBuffer[21], &tPage2, 4);
	CopyMemory(&mBuffer[25], &tIndex2, 4);
	CopyMemory(&mBuffer[29], &tPage3, 4);
	CopyMemory(&mBuffer[33], &tIndex3, 4);
	CopyMemory(&mBuffer[37], &tPage4, 4);
	CopyMemory(&mBuffer[41], &tIndex4, 4);
	mBufferSize = S_LEGENDARY_UPGRADE_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_CRAFT_COSTUME_SEND(int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2, int tPage3, int tIndex3, int tPage4, int tIndex4)
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_CRAFT_COSTUME_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &tPage1, 4);
	CopyMemory(&mBuffer[17], &tIndex1, 4);
	CopyMemory(&mBuffer[21], &tPage2, 4);
	CopyMemory(&mBuffer[25], &tIndex2, 4);
	CopyMemory(&mBuffer[29], &tPage3, 4);
	CopyMemory(&mBuffer[33], &tIndex3, 4);
	CopyMemory(&mBuffer[37], &tPage4, 4);
	CopyMemory(&mBuffer[41], &tIndex4, 4);
	mBufferSize = S_CRAFT_COSTUME_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if (tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_IMPROVE_LEGENDARY_SEND( int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2 )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_IMPROVE_LEGENDARY_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &tPage1, 4);
	CopyMemory(&mBuffer[17], &tIndex1, 4);
	CopyMemory(&mBuffer[21], &tPage2, 4);
	CopyMemory(&mBuffer[25], &tIndex2, 4);
	mBufferSize = S_IMPROVE_LEGENDARY_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}
BOOL TRANSFER::T_UNSEAL_LEGENDARY_SEND( int tSort, int tPage1, int tIndex1, int tPage2, int tIndex2, int tPage3, int tIndex3, int tPage4, int tIndex4 )
{
	int index01;

	int tSendValue;
	int tTotalSendSize = 0;

	mBuffer[7] = mNETWORK.mPacketEncryption[1];
	mBuffer[8] = P_UNSEAL_LEGENDARY_SEND;
	CopyMemory(&mBuffer[9], &tSort, 4);
	CopyMemory(&mBuffer[13], &tPage1, 4);
	CopyMemory(&mBuffer[17], &tIndex1, 4);
	CopyMemory(&mBuffer[21], &tPage2, 4);
	CopyMemory(&mBuffer[25], &tIndex2, 4);
	CopyMemory(&mBuffer[29], &tPage3, 4);
	CopyMemory(&mBuffer[33], &tIndex3, 4);
	CopyMemory(&mBuffer[37], &tPage4, 4);
	CopyMemory(&mBuffer[41], &tIndex4, 4);
	mBufferSize = S_UNSEAL_LEGENDARY_SEND;
	for (index01 = 0; index01 < mBufferSize; index01++)
	{
		mBuffer[index01] ^= mNETWORK.mPacketEncryption[0];
	}
	while (mBufferSize > 0)
	{
		tSendValue = send(mNETWORK.mSocket, &mBuffer[tTotalSendSize], mBufferSize, 0);
		if(tSendValue == SOCKET_ERROR)
		{
			if (WSAGetLastError() == WSAEWOULDBLOCK)
			{
				continue;
			}
			mNETWORK.CLOSE();
			return FALSE;
		}
		else
		{
			mBufferSize -= tSendValue;
			tTotalSendSize += tSendValue;
		}
	}
	mNETWORK.mPacketEncryption[1]++;
	return TRUE;
}