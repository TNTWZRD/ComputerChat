#pragma once

#include <Windows.h>
#include <winsock.h>

class HostSocket
{
public:
	int ListenOnPort(int portno);
	void CloseConnection();
};

