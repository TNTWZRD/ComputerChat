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
		while(!modeSelection)
		{
			cout << "Please Select A Mode: (1)HOST (2)CLIENT (ESC)QUIT" << endl;
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
			case VK_ESCAPE:
				modeSelection = 1;
				pState = programState::LOGOUT;
				break;
			default:
				modeSelection = 1;
				pState = programState::MAINMENU;
				break;
			}
		}
	}

	while (pState == programState::HOSTING_MODE) // Hosting Code
	{
		cout << "Loaded Hosting Mode" << endl;

		pState = programState::LOGOUT;
	}

	while (pState == programState::MAINMENU) // Main Menu Code
	{
		cout << "Loaded Main Menu Mode" << endl;

		pState = programState::LOGOUT;
	}

	while (pState == programState::CHATSCREEN) // Chat Screen Code
	{
		cout << "Loaded Chat Screen Mode" << endl;

		pState = programState::LOGOUT;
	}

	if (pState == programState::LOGOUT)
		return;

}
