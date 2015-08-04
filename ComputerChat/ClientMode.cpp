#include "ClientMode.h"

CLS clearScreen;
ClientSocket mySOCKET;

ClientMode::ClientMode()
{
	bool looping = true;

	while (looping)
	{
		mainMenu();
		char IP = (char)_ip.c_str();
		mySOCKET.ConnectToHost(_port, &IP);

	}

}


void ClientMode::mainMenu()
{
	cout << "Please Enter IP or Address Of Chat Server TO Connect To: ";
	cin >> _ip;
	cout << "Please Enter Password Of Chat Server: ";
	cin >> _serverPassword;
	clearScreen.clear();
	cout << "Please Enter Your Username: ";
	cin >> _username;
	cout << "Please Enter Your Password: ";
	cin >> _password;

	User User(_username);

}