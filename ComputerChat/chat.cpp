#include "chat.h"

chat::chat()
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
		cout << "Loading TheTechSphere Computer Chat Application..." << endl << "Software Version 00.01.01" << endl;
		bool modeSelection = 0;
		while (!modeSelection)
		{
			cout << "Please Select A Mode: (1)HOST (2)CLIENT" << endl;
			char i = _getch();
			switch (i)
			{
			case '1':
				modeselection = 1;
				pState = programState::HOSTING_MODE;
				break;
			case '2':
				modeselection = 1;
				pState = programState::MAINMENU;
				break;
			defualt:
				cout << "Please Enter Either (1) Or (2)......" << endl;
				breack;
			}
		}


		pState = programState::LOGOUT;
	}

	if (pState == programState::LOGOUT)
		return;

}
