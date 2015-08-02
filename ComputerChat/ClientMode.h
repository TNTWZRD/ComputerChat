#pragma once

#include <iostream>
#include <string>

#include "CLS.h"
#include "clientSocket.h"
#include "user.h"

class ClientMode
{
public:
	ClientMode();

private:
	void mainMenu();

	string _ip;
	int _port = 2048;
	string _serverPassword;
	string _username;
	string _password;
};

