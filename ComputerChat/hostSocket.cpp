#include "hostSocket.h"

SOCKET h;
WSADATA w;

int HostSocket::ListenOnPort(int portno)
{
	int error = WSAStartup(0x0202, &w);

	if (error)
		return false;

	if (w.wVersion != 0x0202)
	{
		WSACleanup();
		return false;
	}

	SOCKADDR_IN addr;

	addr.sin_family = AF_INET;
	addr.sin_port = htons(portno);

	addr.sin_addr.s_addr = htonl(INADDR_ANY);

	h = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	if (h == INVALID_SOCKET)
		return false;

	if (bind(h, (LPSOCKADDR)&addr, sizeof(addr)) == SOCKET_ERROR)
		return false;

	listen(h, SOMAXCONN);
}

void HostSocket::CloseConnection()
{
	if (h)
		closesocket(h);

	WSACleanup();
}