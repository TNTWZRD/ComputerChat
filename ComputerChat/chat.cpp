#include "chat.h"

chat::chat()
{
	enum programState
	{
		STARTUP,
		MAINMENU,
		CHATSCREEN,
		LOGOUT
	};

	programState pState = programState::STARTUP;

	while (pState == programState::STARTUP) // Startup Code
	{
		cout << "Loading TheTechSphere Computer Chat Application..." << endl << "Software Version 00.01.01" << endl;

		char i = _getch();
		pState = programState::LOGOUT;
	}

	if (pState == programState::LOGOUT)
		return;

}