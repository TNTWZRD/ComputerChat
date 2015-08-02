#include "ClientMode.h"

CLS clearScreen;
clientSocket SOCKET;

ClientMode::ClientMode()
{
	bool looping = true;

	while (looping)
	{
		mainMenu();
		char IP = (char)_ip.c_str();
		SOCKET.ConnectToHost(_port, &IP);

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

	user User(_username);

}