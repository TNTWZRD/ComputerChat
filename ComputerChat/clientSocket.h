#pragma once

#include <winsock.h>

class clientSocket
{
public:
	bool ConnectToHost(int PortNo, char* IPAddress);
	void CloseConnection();
};

