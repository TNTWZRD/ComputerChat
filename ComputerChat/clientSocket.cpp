#include "clientSocket.h"

SOCKET s;

bool ClientSocket::ConnectToHost(int PortNo, char* IPAddress)
{
	OutputDebugString("[CleintSocket].[ConnectToHost]: Beginning Connection Sequence.\n");
	WSADATA wsadata;

	int error = WSAStartup(0x0202, &wsadata);

	if (error)
		return false;

	if (wsadata.wVersion != 0x0202)
	{
		WSACleanup();
		return false;
	}

	SOCKADDR_IN target;

	target.sin_family = AF_INET;
	target.sin_port = htons(PortNo);
	target.sin_addr.s_addr = inet_addr(IPAddress);

	s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (s == INVALID_SOCKET)
		return false;

	if (connect(s, (SOCKADDR *)&target, sizeof(target)) == SOCKET_ERROR)
	{
		OutputDebugString("[CleintSocket].[ConnectToHost]: Connection Refused.\n");
		return false;
	}
	else
	{
		OutputDebugString("[CleintSocket].[ConnectToHost]: Connection Success.\n");
		return true;
	}
}

void ClientSocket::CloseConnection()
{
	if (s)
		closesocket(s);

	WSACleanup();
}
