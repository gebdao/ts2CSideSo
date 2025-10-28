#include "gxdheader.h"

#pragma comment( lib, "GXD.lib" )
#pragma comment( lib, "TW2AddIn_MT.lib" )
#pragma comment( lib, "SilverLining-MT.lib" )

hMainApplication mAPP[1];
char ProgramName[1000];
BOOL hRender25Sobject;

#define PROGRAM_NAME	"Nightfall Domination"


#include <iostream>
#include <fstream>
#include <windows.h>
#include <Psapi.h> // Psapi.h baþlýk dosyasý, GetModuleFileNameExA iþlevini içerir

#include <iphlpapi.h> // MIB_TCPTABLE_OWNER_PID türü için gerekli baþlýk dosyasý

#pragma comment(lib, "iphlpapi.lib") // iphlpapi.lib kütüphanesini baðlama
#include <iostream>
#include <sstream> // std::ostringstream için gerekli baþlýk dosyasý

////######

#ifndef HAVE_OPENSSL

#define F(x, y, z)   ((z) ^ ((x) & ((y) ^ (z))))
#define G(x, y, z)   ((y) ^ ((z) & ((x) ^ (y))))
#define H(x, y, z)   ((x) ^ (y) ^ (z))
#define I(x, y, z)   ((y) ^ ((x) | ~(z)))
#define STEP(f, a, b, c, d, x, t, s) \
		(a) += f((b), (c), (d)) + (x) + (t); \
		(a) = (((a) << (s)) | (((a) & 0xffffffff) >> (32 - (s)))); \
		(a) += (b);

#if defined(__i386__) || defined(__x86_64__) || defined(__vax__)
#define SET(n) \
			(*(MD5_u32 *)&ptr[(n) * 4])
#define GET(n) \
			SET(n)
#else
#define SET(n) \
			(ctx->block[(n)] = \
			(MD5_u32)ptr[(n) * 4] | \
			((MD5_u32)ptr[(n) * 4 + 1] << 8) | \
			((MD5_u32)ptr[(n) * 4 + 2] << 16) | \
			((MD5_u32)ptr[(n) * 4 + 3] << 24))
#define GET(n) \
			(ctx->block[(n)])
#endif

typedef unsigned int MD5_u32;

typedef struct {
	MD5_u32 lo, hi;
	MD5_u32 a, b, c, d;
	unsigned char buffer[64];
	MD5_u32 block[16];
} MD5_CTX;

static void MD5_Init(MD5_CTX* ctx);
static void MD5_Update(MD5_CTX* ctx, const void* data, unsigned long size);
static void MD5_Final(unsigned char* result, MD5_CTX* ctx);

static const void* body(MD5_CTX* ctx, const void* data, unsigned long size) {
	const unsigned char* ptr;
	MD5_u32 a, b, c, d;
	MD5_u32 saved_a, saved_b, saved_c, saved_d;

	ptr = (const unsigned char*)data;

	a = ctx->a;
	b = ctx->b;
	c = ctx->c;
	d = ctx->d;

	do {
		saved_a = a;
		saved_b = b;
		saved_c = c;
		saved_d = d;

		STEP(F, a, b, c, d, SET(0), 0xd76aa478, 7)
			STEP(F, d, a, b, c, SET(1), 0xe8c7b756, 12)
			STEP(F, c, d, a, b, SET(2), 0x242070db, 17)
			STEP(F, b, c, d, a, SET(3), 0xc1bdceee, 22)
			STEP(F, a, b, c, d, SET(4), 0xf57c0faf, 7)
			STEP(F, d, a, b, c, SET(5), 0x4787c62a, 12)
			STEP(F, c, d, a, b, SET(6), 0xa8304613, 17)
			STEP(F, b, c, d, a, SET(7), 0xfd469501, 22)
			STEP(F, a, b, c, d, SET(8), 0x698098d8, 7)
			STEP(F, d, a, b, c, SET(9), 0x8b44f7af, 12)
			STEP(F, c, d, a, b, SET(10), 0xffff5bb1, 17)
			STEP(F, b, c, d, a, SET(11), 0x895cd7be, 22)
			STEP(F, a, b, c, d, SET(12), 0x6b901122, 7)
			STEP(F, d, a, b, c, SET(13), 0xfd987193, 12)
			STEP(F, c, d, a, b, SET(14), 0xa679438e, 17)
			STEP(F, b, c, d, a, SET(15), 0x49b40821, 22)
			STEP(G, a, b, c, d, GET(1), 0xf61e2562, 5)
			STEP(G, d, a, b, c, GET(6), 0xc040b340, 9)
			STEP(G, c, d, a, b, GET(11), 0x265e5a51, 14)
			STEP(G, b, c, d, a, GET(0), 0xe9b6c7aa, 20)
			STEP(G, a, b, c, d, GET(5), 0xd62f105d, 5)
			STEP(G, d, a, b, c, GET(10), 0x02441453, 9)
			STEP(G, c, d, a, b, GET(15), 0xd8a1e681, 14)
			STEP(G, b, c, d, a, GET(4), 0xe7d3fbc8, 20)
			STEP(G, a, b, c, d, GET(9), 0x21e1cde6, 5)
			STEP(G, d, a, b, c, GET(14), 0xc33707d6, 9)
			STEP(G, c, d, a, b, GET(3), 0xf4d50d87, 14)
			STEP(G, b, c, d, a, GET(8), 0x455a14ed, 20)
			STEP(G, a, b, c, d, GET(13), 0xa9e3e905, 5)
			STEP(G, d, a, b, c, GET(2), 0xfcefa3f8, 9)
			STEP(G, c, d, a, b, GET(7), 0x676f02d9, 14)
			STEP(G, b, c, d, a, GET(12), 0x8d2a4c8a, 20)
			STEP(H, a, b, c, d, GET(5), 0xfffa3942, 4)
			STEP(H, d, a, b, c, GET(8), 0x8771f681, 11)
			STEP(H, c, d, a, b, GET(11), 0x6d9d6122, 16)
			STEP(H, b, c, d, a, GET(14), 0xfde5380c, 23)
			STEP(H, a, b, c, d, GET(1), 0xa4beea44, 4)
			STEP(H, d, a, b, c, GET(4), 0x4bdecfa9, 11)
			STEP(H, c, d, a, b, GET(7), 0xf6bb4b60, 16)
			STEP(H, b, c, d, a, GET(10), 0xbebfbc70, 23)
			STEP(H, a, b, c, d, GET(13), 0x289b7ec6, 4)
			STEP(H, d, a, b, c, GET(0), 0xeaa127fa, 11)
			STEP(H, c, d, a, b, GET(3), 0xd4ef3085, 16)
			STEP(H, b, c, d, a, GET(6), 0x04881d05, 23)
			STEP(H, a, b, c, d, GET(9), 0xd9d4d039, 4)
			STEP(H, d, a, b, c, GET(12), 0xe6db99e5, 11)
			STEP(H, c, d, a, b, GET(15), 0x1fa27cf8, 16)
			STEP(H, b, c, d, a, GET(2), 0xc4ac5665, 23)
			STEP(I, a, b, c, d, GET(0), 0xf4292244, 6)
			STEP(I, d, a, b, c, GET(7), 0x432aff97, 10)
			STEP(I, c, d, a, b, GET(14), 0xab9423a7, 15)
			STEP(I, b, c, d, a, GET(5), 0xfc93a039, 21)
			STEP(I, a, b, c, d, GET(12), 0x655b59c3, 6)
			STEP(I, d, a, b, c, GET(3), 0x8f0ccc92, 10)
			STEP(I, c, d, a, b, GET(10), 0xffeff47d, 15)
			STEP(I, b, c, d, a, GET(1), 0x85845dd1, 21)
			STEP(I, a, b, c, d, GET(8), 0x6fa87e4f, 6)
			STEP(I, d, a, b, c, GET(15), 0xfe2ce6e0, 10)
			STEP(I, c, d, a, b, GET(6), 0xa3014314, 15)
			STEP(I, b, c, d, a, GET(13), 0x4e0811a1, 21)
			STEP(I, a, b, c, d, GET(4), 0xf7537e82, 6)
			STEP(I, d, a, b, c, GET(11), 0xbd3af235, 10)
			STEP(I, c, d, a, b, GET(2), 0x2ad7d2bb, 15)
			STEP(I, b, c, d, a, GET(9), 0xeb86d391, 21)

			a += saved_a;
		b += saved_b;
		c += saved_c;
		d += saved_d;

		ptr += 64;
	} while (size -= 64);

	ctx->a = a;
	ctx->b = b;
	ctx->c = c;
	ctx->d = d;

	return ptr;
}

void MD5_Init(MD5_CTX* ctx) {
	ctx->a = 0x67452301;
	ctx->b = 0xefcdab89;
	ctx->c = 0x98badcfe;
	ctx->d = 0x10325476;

	ctx->lo = 0;
	ctx->hi = 0;
}

void MD5_Update(MD5_CTX* ctx, const void* data, unsigned long size) {
	MD5_u32 saved_lo;
	unsigned long used, free;

	saved_lo = ctx->lo;
	if ((ctx->lo = (saved_lo + size) & 0x1fffffff) < saved_lo)
		ctx->hi++;
	ctx->hi += size >> 29;
	used = saved_lo & 0x3f;

	if (used) {
		free = 64 - used;
		if (size < free) {
			memcpy(&ctx->buffer[used], data, size);
			return;
		}

		memcpy(&ctx->buffer[used], data, free);
		data = (unsigned char*)data + free;
		size -= free;
		body(ctx, ctx->buffer, 64);
	}

	if (size >= 64) {
		data = body(ctx, data, size & ~(unsigned long)0x3f);
		size &= 0x3f;
	}

	memcpy(ctx->buffer, data, size);
}

void MD5_Final(unsigned char* result, MD5_CTX* ctx) {
	unsigned long used, free;
	used = ctx->lo & 0x3f;
	ctx->buffer[used++] = 0x80;
	free = 64 - used;

	if (free < 8) {
		memset(&ctx->buffer[used], 0, free);
		body(ctx, ctx->buffer, 64);
		used = 0;
		free = 64;
	}

	memset(&ctx->buffer[used], 0, free - 8);

	ctx->lo <<= 3;
	ctx->buffer[56] = ctx->lo;
	ctx->buffer[57] = ctx->lo >> 8;
	ctx->buffer[58] = ctx->lo >> 16;
	ctx->buffer[59] = ctx->lo >> 24;
	ctx->buffer[60] = ctx->hi;
	ctx->buffer[61] = ctx->hi >> 8;
	ctx->buffer[62] = ctx->hi >> 16;
	ctx->buffer[63] = ctx->hi >> 24;
	body(ctx, ctx->buffer, 64);
	result[0] = ctx->a;
	result[1] = ctx->a >> 8;
	result[2] = ctx->a >> 16;
	result[3] = ctx->a >> 24;
	result[4] = ctx->b;
	result[5] = ctx->b >> 8;
	result[6] = ctx->b >> 16;
	result[7] = ctx->b >> 24;
	result[8] = ctx->c;
	result[9] = ctx->c >> 8;
	result[10] = ctx->c >> 16;
	result[11] = ctx->c >> 24;
	result[12] = ctx->d;
	result[13] = ctx->d >> 8;
	result[14] = ctx->d >> 16;
	result[15] = ctx->d >> 24;
	memset(ctx, 0, sizeof(*ctx));
}
#else
#include <openssl/md5.h>
#endif


using namespace std;

/* Return Calculated raw result(always little-endian), the size is always 16 */
void md5bin(const void* dat, size_t len, unsigned char out[16]) {
	MD5_CTX c;
	MD5_Init(&c);
	MD5_Update(&c, dat, len);
	MD5_Final(out, &c);
}

static char hb2hex(unsigned char hb) {
	hb = hb & 0xF;
	return hb < 10 ? '0' + hb : hb - 10 + 'a';
}


string md5file(std::FILE* file) {

	MD5_CTX c;
	MD5_Init(&c);

	char buff[BUFSIZ];
	unsigned char out[16];
	size_t len = 0;
	while ((len = std::fread(buff, sizeof(char), BUFSIZ, file)) > 0) {
		MD5_Update(&c, buff, len);
	}
	MD5_Final(out, &c);

	string res;
	for (size_t i = 0; i < 16; ++i) {
		res.push_back(hb2hex(out[i] >> 4));
		res.push_back(hb2hex(out[i]));
	}
	return res;
}

string md5(const void* dat, size_t len) {
	string res;
	unsigned char out[16];
	md5bin(dat, len, out);
	for (size_t i = 0; i < 16; ++i) {
		res.push_back(hb2hex(out[i] >> 4));
		res.push_back(hb2hex(out[i]));
	}
	return res;
}

std::string md5(std::string dat) {
	return md5(dat.c_str(), dat.length());
}

/* Generate shorter md5sum by something like base62 instead of base16 or base10. 0~61 are represented by 0-9a-zA-Z */
string md5sum6(const void* dat, size_t len) {
	static const char* tbl = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string res;
	unsigned char out[16];
	md5bin(dat, len, out);
	for (size_t i = 0; i < 6; ++i) {
		res.push_back(tbl[out[i] % 62]);
	}
	return res;
}

std::string md5sum6(std::string dat) {
	return md5sum6(dat.c_str(), dat.length());
}

///######


///######
#include <WinSock2.h>
#pragma comment(lib, "ws2_32.lib")

#include <iostream>
#include <fstream> // Dosya iþlemleri için gerekli olan baþlýk dosyasý

void writeToLogFile(const std::string& message) {

	return; 
	std::ofstream logFile("log.txt", std::ios::app); // Log dosyasýný aç

	if (logFile.is_open()) { // Dosya baþarýyla açýldý mý kontrol et
		logFile << message << std::endl; // Mesajý dosyaya yaz
		logFile.close(); // Dosyayý kapat
	}
	else {
		std::cerr << "Log dosyasý açýlamadý." << std::endl; // Hata durumunda hata mesajý yazdýr
	}
}


void ListenTCPServer(int port) {

	writeToLogFile("Hello World ListenTCPServer\r\n");

	WSADATA wsaData;
	int result = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (result != 0) {
		std::cerr << "WSAStartup failed: " << result << std::endl;
		writeToLogFile("WSAStartup\r\n");

		return;
	}

	// Socket oluþturma
	SOCKET listenSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (listenSocket == INVALID_SOCKET) {
		std::cerr << "Error creating socket: " << WSAGetLastError() << std::endl;
		writeToLogFile("Error creating socket\r\n");
		WSACleanup();
		return;
	}

	// Adres oluþturma
	sockaddr_in serverAddr;
	serverAddr.sin_family = AF_INET;
	serverAddr.sin_port = htons(port);
	serverAddr.sin_addr.s_addr = INADDR_ANY;

	// Socket'i adresleme
	if (bind(listenSocket, reinterpret_cast<sockaddr*>(&serverAddr), sizeof(serverAddr)) == SOCKET_ERROR) {
		std::cerr << "Bind failed: " << WSAGetLastError() << std::endl;
		writeToLogFile("Bind failed:\r\n");

		closesocket(listenSocket);
		WSACleanup();
		exit(EXIT_FAILURE);
		return;
	}

	// Baðlantýlarý dinleme
	if (listen(listenSocket, SOMAXCONN) == SOCKET_ERROR) {
		std::cerr << "Listen failed: " << WSAGetLastError() << std::endl;
		writeToLogFile("Listen failed:\r\n");

		closesocket(listenSocket);
		WSACleanup();
		return;
	}

	std::cout << "Server is listening on port " << port << "..." << std::endl;
	writeToLogFile("Server is listening on por :\r\n");

	// Baðlantýyý kabul etme
	SOCKET clientSocket = accept(listenSocket, NULL, NULL);
	if (clientSocket == INVALID_SOCKET) {
		std::cerr << "Accept failed: " << WSAGetLastError() << std::endl;
		writeToLogFile("Accept failed:\r\n");
		closesocket(listenSocket);
		WSACleanup();
		return;
	}

	std::cout << "Client connected!" << std::endl;
	writeToLogFile("Client connected!\r\n");
	// Baðlantýyý kapatma
	closesocket(clientSocket);
	closesocket(listenSocket);
	WSACleanup();
}

///######




//DWORD WINAPI ThreadFunc1(LPVOID lpParam) {
//	
//	ListenTCPServer(35335);
//
//	return 0;
//}



///######



BOOL CheckMultiClient(const char* filename)
{
	HANDLE hSnapShot = CreateToolhelp32Snapshot(TH32CS_SNAPALL, NULL);
	PROCESSENTRY32 pEntry;
	int clientnumber = 0;
	pEntry.dwSize = sizeof(pEntry);
	BOOL hRes = Process32First(hSnapShot, &pEntry);
	while (hRes)
	{
		if (strcmp(pEntry.szExeFile, filename) == 0)
		{
			clientnumber++;
			if (clientnumber > 1)
			{
				return TRUE;
			}
		}
		hRes = Process32Next(hSnapShot, &pEntry);
	}
	CloseHandle(hSnapShot);
	return FALSE;
}

BOOL WINAPI ApplicationInit(HINSTANCE hInstanceHandle, HWND hWindowHandle)
{
	time_t seed;
	D3DXFONT_DESC tFontInfo;
	int tResult;
	char Text[1000];
	writeToLogFile("Init\r\n");




	writeToLogFile("Step 1\r\n");


	writeToLogFile("Step 2\r\n");


	seed = time(0);
	srand(seed);
	mAPP[0].hInstance = hInstanceHandle;
	mAPP[0].hMainWindow = hWindowHandle;
	if (!mFONTDATA.Init())
	{
		MessageBoxA(NULL, "[Error::mFONTDATA.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	memset(&tFontInfo, 0, sizeof(D3DXFONT_DESC));
	tFontInfo.Height = 12;
	tFontInfo.Width = 6;
	tFontInfo.Weight = 0;
	tFontInfo.MipLevels = 1;
	tFontInfo.Italic = 0;
	tFontInfo.CharSet = 1;
	tFontInfo.OutputPrecision = 0;
	tFontInfo.Quality = 5;
	tFontInfo.PitchAndFamily = 0;
	strcpy(tFontInfo.FaceName, "Arial.TFF");
	if (mMYINFO.mScreenSort == 2)
	{
		if (!mGXD.Init(FALSE, hInstanceHandle, hWindowHandle, mMYINFO.mScreenXSize, mMYINFO.mScreenYSize, 1.0f, 1000000.0f, 0, &tFontInfo, &tResult))
		{
			sprintf(Text, "[Error::mGXD.Init(%d)]", tResult);
			MessageBoxA(0, Text, PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
			return FALSE;
		}
		if (!TW2AddIn::mGXD.InitForAddIn(mMYINFO.mScreenXSize, mMYINFO.mScreenYSize, 1.0f, 1000000.0f, mGXD.mDirect3D, mGXD.mGraphicDevice, tResult))
		{
			sprintf(Text, "[Error::TW2AddIn::mGXD.Init(%d)]", tResult);
			MessageBoxA(0, Text, PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
			return 0;
		}
	}
	else
	{
		if (!mGXD.Init(TRUE, hInstanceHandle, hWindowHandle, mMYINFO.mScreenXSize, mMYINFO.mScreenYSize, 1.0f, 1000000.0f, 0, &tFontInfo, &tResult))
		{
			sprintf(Text, "[Error::mGXD.Init(%d)]", tResult);
			MessageBoxA(0, Text, PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
			return FALSE;
		}
		if (!TW2AddIn::mGXD.InitForAddIn(mMYINFO.mScreenXSize, mMYINFO.mScreenYSize, 1.0f, 1000000.0f, mGXD.mDirect3D, mGXD.mGraphicDevice, tResult))
		{
			sprintf(Text, "[Error::TW2AddIn::mGXD.Init(%d)]", tResult);
			MessageBoxA(0, Text, PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
			return 0;
		}
	}
	if (!mNETWORK.Init())
	{
		MessageBoxA(NULL, "[Error::mNETWORK.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mWORK[0].Init())
	{
		MessageBoxA(NULL, "[Error::mWORKER.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mTRANSFER.Init())
	{
		MessageBoxA(NULL, "[Error::mTRANSFER.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mPOINTER.Init())
	{
		MessageBoxA(NULL, "[Error::mPOINTER.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mGAMENOTICE.Init())
	{
		MessageBoxA(NULL, "[Error::mGAMENOTICE.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mZONENAME.Init())
	{
		MessageBoxA(NULL, "[Error::mZONENAME.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mMESSAGE.Init())
	{
		MessageBoxA(NULL, "[Error::mMESSAGE.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mFONTCOLOR.Init())
	{
		MessageBoxA(NULL, "[Error::mFONTCOLOR.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mGAMEOPTION.Init())
	{
		MessageBoxA(NULL, "[Error::mGAMEOPTION.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mLEVEL.Init())
	{
		MessageBoxA(NULL, "[Error::mLEVEL.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mITEM.Init())
	{
		MessageBoxA(NULL, "[Error::mITEM.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mSKILL.Init())
	{
		MessageBoxA(NULL, "[Error::mSKILL.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mMONSTER.Init())
	{
		MessageBoxA(NULL, "[Error::mMONSTER.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mNPC.Init())
	{
		MessageBoxA(NULL, "[Error::mNPC.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mQUEST.Init())
	{
		MessageBoxA(NULL, "[Error::mQUEST.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mHELP.Init())
	{
		MessageBoxA(NULL, "[Error::mHELP.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mPET.Init())
	{
		MessageBoxA(NULL, "[Error::mPAT.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mSOCKET.Init())
	{
		MessageBoxA(NULL, "[Error::mSOCKET.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mGDATA.Init())
	{
		MessageBoxA(NULL, "[Error::mGDATA.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mZONEMAININFO.Init())
	{
		MessageBoxA(NULL, "[Error::mZONEMAININFO.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mZONENPCINFO.Init())
	{
		MessageBoxA(NULL, "[Error::mZONENPCINFO.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mZONEMOVEINFO.Init())
	{
		MessageBoxA(NULL, "[Error::mZONEMOVEINFO.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mMYINFO.Init())
	{
		MessageBoxA(NULL, "[Error::mMYINFO.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mMAIN.Init())
	{
		MessageBoxA(NULL, "[Error::mMAIN.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mUTIL.Init())
	{
		MessageBoxA(NULL, "[Error::mUTIL.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mINPUT.Init())
	{
		MessageBoxA(NULL, "[Error::mINPUT.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mEDITBOX.Init())
	{
		MessageBoxA(NULL, "[Error::mEDITBOX.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mUI.Init())
	{
		MessageBoxA(NULL, "[Error::mUI.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}
	if (!mPLAY.Init())
	{
		MessageBoxA(NULL, "[Error::mPLAY.Init()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return FALSE;
	}

	mAPP[0].hPresentElapsedSeconds = mGXD.GetTotalElapsedSeconds();
	mAPP[0].hPostSecondsForLogic = mAPP[0].hPresentElapsedSeconds;
	mAPP[0].hPostSecondsForMemory = mAPP[0].hPresentElapsedSeconds;
	mAPP[0].hPresentFramesSecond = 0.033f;
	writeToLogFile("Start Done\r\n");

	mMAIN.Start();

	return TRUE;

}

void ApplicationFree()
{
	mPLAY.Free();
	mUI.Free();
	mEDITBOX.Free();
	mINPUT.Free();
	mUTIL.Free();
	mMAIN.Free();
	mGDATA.Free();
	mMYINFO.Free();
	mNETWORK.Free();
	TW2AddIn::mGXD.FreeForAddIn();
	mGXD.Free();
	mFONTDATA.Free();
}

void ApplicationMain()
{
	float tFramesSeconds = 0.0f;
	char Buf[100];
	int tResult;

	mAPP[0].hPresentElapsedSeconds = mGXD.GetTotalElapsedSeconds();

	if ((mAPP[0].hPresentElapsedSeconds - mAPP[0].hPostSecondsForLogic) < 0.0083f)
	{
		return;
	}
	mAPP[0].hPresentFramesSecond = mAPP[0].hPresentElapsedSeconds - mAPP[0].hPostSecondsForLogic;
	mGXD.UpdateForInputSystem(mAPP[0].hActiveApplication);
	mINPUT.KEYBOARD();
	while (TRUE)
	{
		mMAIN.Logic(0.0083f);
		tFramesSeconds += 0.0083f;
		mAPP[0].hPostSecondsForLogic += 0.0083f;
		if ((mAPP[0].hPresentElapsedSeconds - mAPP[0].hPostSecondsForLogic) < 0.0083f)
		{
			break;
		}
	}
	//if (mAPP[0].hActiveApplication)
	//{
	mMAIN.Draw(tFramesSeconds);
	//}
	if ((mAPP[0].hPresentElapsedSeconds - mAPP[0].hPostSecondsForMemory) < 60.0f)
	{
		return;
	}
	mAPP[0].hPostSecondsForMemory = mAPP[0].hPresentElapsedSeconds;
	mGDATA.ProcessForMemory(mAPP[0].hPresentElapsedSeconds, 300.0f);
}

LRESULT CALLBACK WinMainProcedure(HWND hWnd, UINT nMss, WPARAM wPrm, LPARAM lPrm)
{

	switch (nMss)
	{
	case WM_ACTIVATEAPP:
		mAPP[0].hActiveApplication = (BOOL)wPrm;
		return 0;

	case WM_USER + 1: // WM_NETWORK_MESSAGE_1
		mNETWORK.PROCESS_FOR_NETWORK(wPrm, lPrm);
		return 0;

	case WM_KEYDOWN:
		if (wPrm == VK_RETURN)
		{
			mBASICUI.ProcessEnterForEditBox00();
		}
		return 0;

	case WM_CLOSE:
		return 0;

	case WM_DESTROY:
		PostQuitMessage(0);
		return 0;

	case WM_LBUTTONDOWN:
		SetCapture(mAPP[0].hMainWindow);
		mINPUT.LBUTTONDOWN(LOWORD(lPrm), HIWORD(lPrm));
		return 0;

	case WM_LBUTTONUP:
		ReleaseCapture();
		mINPUT.LBUTTONUP(LOWORD(lPrm), HIWORD(lPrm));
		return 0;

	case WM_RBUTTONDOWN:
		SetCapture(mAPP[0].hMainWindow);
		mINPUT.RBUTTONDOWN(LOWORD(lPrm), HIWORD(lPrm));
		return 0;

	case WM_RBUTTONUP:
		ReleaseCapture();
		mINPUT.RBUTTONUP(LOWORD(lPrm), HIWORD(lPrm));
		return 0;

	case WM_MBUTTONDOWN:
		mINPUT.MBUTTONDOWN(LOWORD(lPrm), HIWORD(lPrm));
		return 0;

	case WM_MOUSEWHEEL:
		mINPUT.MOUSEWHEEL((short)HIWORD(wPrm));
		return 0;

	case WM_MOUSEMOVE:
		mINPUT.MOUSEMOVE(LOWORD(lPrm), HIWORD(lPrm), wPrm);
		return 0;

	case WM_SYSCOMMAND:
		if (mMYINFO.mScreenSort != 2)
		{
			return 0;
		}
		switch ((wPrm & 0xFFF0))
		{
		case SC_MOVE:
		case SC_MINIMIZE:
		case SC_MAXIMIZE:
		case SC_RESTORE:
			break;
		case SC_CLOSE:
			mAPP[0].hAbortProgram = 1;
			return 0;
		default:
			return 0;
		}

	}
	return DefWindowProcA(hWnd, nMss, wPrm, lPrm);
}

static void SetupExceptionHandler()
{
	BT_InstallSehFilter();
	BT_SetAppName(PROGRAM_NAME);
	BT_SetSupportEMail("email@domain.com");
	BT_SetFlags(BTF_DETAILEDMODE | BTF_EDITMAIL);
	BT_SetSupportServer(("localhost"), 9999);
	BT_SetSupportURL(("http://www.your-web-site.com"));
}

BOOL WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
	int index01;
	int index02;
	int index03;
	char tempString01[1000];
	WNDCLASSEX wCls;
	RECT rc;
	HMENU hMenu;
	DWORD dwStyle;
	MSG msg;

	mMYINFO.mScreenXPosSize = 1024.0f;
	mMYINFO.mScreenYPosSize = 768.0f;
	mMYINFO.mServerType = 0;
#ifdef TESTSERVER
	AllocConsole();
	freopen("CONOUT$", "w", stdout);
#endif

	if (CheckMultiClient("Wasakan2.exe"))
	{
		MessageBoxA(0, "[Error::CheckMultiClient(2)]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return 0;
	}

	// Init BugTrap
	SetupExceptionHandler();

	if (*lpCmdLine != '/')
	{
		MessageBoxA(0, "[Error::PARAMETER]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return 0;
	}
	index02 = 1;
	index03 = 0;
	for (index01 = 1; index01 <= (int)strlen(lpCmdLine); index01++)
	{
		if ((lpCmdLine[index01] == '/') || (lpCmdLine[index01] == '\0'))
		{
			tempString01[index03] = '\0';
			switch (index02)
			{
			case 1:
				if (index02 == 1)
				{
					mMYINFO.mServerType = atoi(tempString01);
					index02++;
					index03 = 0;
					break;
				}
				MessageBoxA(0, "[Error::PARAMETER1]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
				return 0;

			case 2:
				index02++;
				index03 = 0;
				break;

			case 3:
				if (index03 >= 1 && index03 <= 1)
				{
					mMYINFO.mScreenSort = atoi(tempString01);
					index02++;
					index03 = 0;
					break;
				}
				MessageBoxA(0, "[Error::PARAMETER3]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
				return 0;

			case 4:
				if (index03 >= 1 && index03 <= 4)
				{
					mMYINFO.mScreenXSize = atoi(tempString01);
					index02++;
					index03 = 0;
					break;
				}
				MessageBoxA(0, "[Error::PARAMETER4]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
				return 0;

			case 5:
				if (index03 >= 1 && index03 <= 4)
				{
					mMYINFO.mScreenYSize = atoi(tempString01);
					index02++;
					index03 = 0;
					break;
				}
				MessageBoxA(0, "[Error::PARAMETER5]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
				return 0;

			default:
				MessageBoxA(0, "[Error::PARAMETER]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
				return 0;
			}
		}
		else
		{
			tempString01[index03] = lpCmdLine[index01];
			index03++;
			if (index03 == 1000)
			{
				MessageBox(NULL, "[Error::PARAMETER]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
				return 0;
			}
		}
	}

	sprintf(ProgramName,  PROGRAM_NAME);
	wCls.cbSize = 48;
	wCls.style = 3;
	wCls.lpfnWndProc = WinMainProcedure;
	wCls.cbClsExtra = 0;
	wCls.cbWndExtra = 0;
	wCls.hInstance = hInstance;
	wCls.hIcon = LoadIconA(hInstance, MAKEINTRESOURCE(101));
	wCls.hCursor = LoadCursorA(0, MAKEINTRESOURCE(32512));
	wCls.hbrBackground = (HBRUSH)GetStockObject(4);
	wCls.lpszMenuName = 0;
	wCls.lpszClassName = ProgramName;
	wCls.hIconSm = 0;
	if (!RegisterClassExA(&wCls))
	{
		MessageBoxA(0, "[Error::RegisterClassEx()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return 0;
	}
	mGXD.InitForSound();
	if (mMYINFO.mScreenSort == 2)
	{
		dwStyle = WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU | WS_MINIMIZEBOX | WS_VISIBLE;
		if (!SetRect(&rc, 0, 0, mMYINFO.mScreenXSize, mMYINFO.mScreenYSize))
		{
			MessageBoxA(0, "[Error::SetRect()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
			return 0;
		}
		if (!AdjustWindowRect(&rc, dwStyle, 0))
		{
			MessageBoxA(0, "[Error::AdjustWindowRect()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
			return 0;
		}
		mAPP[0].hMainWindow = CreateWindowExA(NULL, ProgramName, ProgramName, dwStyle, (GetSystemMetrics(SM_CXSCREEN) / 2 - ((rc.right - rc.left) / 2)), (GetSystemMetrics(SM_CYSCREEN) / 2 - ((rc.bottom - rc.top) / 2)), (rc.right - rc.left), (rc.bottom - rc.top), HWND_DESKTOP, NULL, hInstance, NULL);
	}
	else
	{
		mAPP[0].hMainWindow = CreateWindowEx(WS_EX_APPWINDOW, ProgramName, ProgramName, WS_POPUP, 0, 0, mMYINFO.mScreenXSize, mMYINFO.mScreenYSize, HWND_DESKTOP, NULL, hInstance, NULL);
	}
	if (!mAPP[0].hMainWindow)
	{
		MessageBoxA(0, "[Error::CreateWindowEx()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		return 0;
	}
	//sub_6C88F0("INTRO.AVI", hInstance, hWnd); // PlayIntro
	ShowWindow(mAPP[0].hMainWindow, nShowCmd);
	UpdateWindow(mAPP[0].hMainWindow);
	if (!ApplicationInit(hInstance, mAPP[0].hMainWindow))
	{
		MessageBoxA(0, "[Error::ApplicationInit()]", PROGRAM_NAME, (MB_OK | MB_SYSTEMMODAL));
		ApplicationFree();
		return 0;
	}
	SendMessage(ImmGetDefaultIMEWnd(mAPP[0].hMainWindow), WM_IME_CONTROL, (WPARAM)IMC_CLOSESTATUSWINDOW, (LPARAM)0);
	while (TRUE)
	{
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
			if (msg.message == WM_QUIT)
			{
				break;
			}
		}
		else
		{
			ApplicationMain();
			if (mAPP[0].hAbortProgram)
			{
				break;
			}
		}
		mPOINTER.Set();
	};
	ApplicationFree();
	return TRUE;
}