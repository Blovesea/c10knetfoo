#define  WIN32_LEAN_AND_MEAN

#include <Windows.h>
#include <WinSock2.h>

//#pragma comment(lib, "ws2_32.lib")

int main()
{
	WORD ver = MAKEWORD(2, 2);
	WSADATA data;
	WSAStartup(ver, &data);

	WSACleanup();
	return 0;
}