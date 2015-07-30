#include "chat.h"

Chat::Chat()
{
	enum programState
	{
		STARTUP,
		HOSTING_MODE,
		MAINMENU,
		CHATSCREEN,
		LOGOUT
	};

	programState pState = programState::STARTUP;

	while (pState == programState::STARTUP) // Startup Code
	{
		cout << "Loading TheTechSphere Computer Chat Application..." << endl << "\n\tSoftware Version 00.01.01\n\n" << endl;
		bool modeSelection = 0;
		while (!modeSelection)
		{
			cout << "Please Select A Mode: (1)HOST (2)CLIENT" << endl;
			char i = _getch();
			switch (i)
			{
			case '1':
				modeSelection = 1;
				pState = programState::HOSTING_MODE;
				break;
			case '2':
				modeSelection = 1;
				pState = programState::MAINMENU;
				break;
			default:
				cout << "Please Enter Either (1) Or (2)......" << endl;
				break;
			}
		}


		pState = programState::LOGOUT;
	}

	if (pState == programState::LOGOUT)
		return;

}
