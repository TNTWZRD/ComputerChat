#pragma once

#include <Windows.h>
#include <winsock.h>

class hostSocket
{
public:
	int ListenOnPort(int portno);
	void CloseConnection();
};

