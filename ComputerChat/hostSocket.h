#pragma once

#include <Windows.h>
#include <winsock.h>

#define HOST_DID_CONNECT 1

class HostSocket
{
public:
	int ListenOnPort(int portno);
	void CloseConnection();
};

