#pragma once

#ifndef HSOCK_H
#define HSOCK_H

#include <Windows.h>
#include <winsock.h>

class hostSocket
{
public:
	int ListenOnPort(int portno);
	void CloseConnection();
};


#endif // defined(HSOCK_H)
