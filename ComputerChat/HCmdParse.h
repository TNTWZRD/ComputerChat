#pragma once

#include <string>
#include <vector>
#include <iostream>
#include "Explode.h"

class HCmdParse
{
public:
	HCmdParse() {}

	void parseCMD(string CMD)
	{
		Explode EXP;
		CMDS = EXP.explode(CMD, '.');
		
		if (CMDS[0] == "ban")
		{
			hBAN();
		}
		else if(CMDS[0] == "unban")
		{
			hUNBAN();
		}
		else if (CMDS[0] == "kick")
		{
			hKICK();
		}
		else if (CMDS[0] == "say")
		{
			hKICK();
		}
		else if (CMDS[0] == "setpassword")
		{
			hSETPASSWORD();
		}
		else if (CMDS[0] == "whiteliston")
		{
			hWHITELISTON();
		}
		else if (CMDS[0] == "whitelist")
		{
			hWHITELIST();
		}
		else if (CMDS[0] == "room")
		{
			hROOM();
		}
		else
		{
			cout << "COMMAND ERROR: COMMAND <" << CMDS[0] << "> NOT FOUND PLEASE CHECK SPELLING AND CAPITALIZATION" << endl;
		}
	}
private:
	vector<string> CMDS;
	string CMD;

	void hBAN()
	{
		if (CMDS[1] == "user")
		{
			// BAN USER CMDS[2]
		}
		else if (CMDS[1] == "ip")
		{
			// BAN IP OF USER CMDS[2]
		}
		else
		{
			cout << "COMMAND ERROR: COMMAND ban.<" << CMDS[0] << "> NOT FOUND PLEASE CHECK SPELLING AND CAPITALIZATION" << endl;
		}
	}

	void hUNBAN()
	{
		if (CMDS[1] == "user")
		{
			// UNBAN USER CMDS[2]
		}
		else if (CMDS[1] == "ip")
		{
			// UNBAN IP OF USER CMDS[2]
		}
		else
		{
			cout << "COMMAND ERROR: COMMAND unban.<" << CMDS[0] << "> NOT FOUND PLEASE CHECK SPELLING AND CAPITALIZATION" << endl;
		}
	}

	void hKICK()
	{
		if (CMDS[1] == "user")
		{
			// UNBAN USER CMDS[2]
		}
		else
		{
			cout << "COMMAND ERROR: COMMAND kick.<" << CMDS[0] << "> NOT FOUND PLEASE CHECK SPELLING AND CAPITALIZATION" << endl;
		}
	}

	void hSAY()
	{
		// COUT "[SERVER]: " + CMDS[1]
	}

	void hSETPASSWORD()
	{
		// SET SERVERPASSWORD = CMDS[1]
	}

	void hWHITELISTON()
	{
		if (CMDS[1] == "true") 
		{
			// TURN ON WHITELIST
		}
		else if (CMDS[1] == "FALSE")
		{
			// TURN OFF WHITELIST
		}
		else
		{
			cout << "COMMAND ERROR: COMMAND whiteliston.<" << CMDS[0] << "> NOT FOUND PLEASE CHECK SPELLING AND CAPITALIZATION" << endl;
		}
	}

	void hWHITELIST()
	{
		if (CMDS[1] == "add")
		{
			// ADD USER CMDS[2] TO WHITELIST
		}
		else if (CMDS[1] == "remove")
		{
			// REMOVE USER CMDS[2] FROM WHITELIST
		}
		else
		{
			cout << "COMMAND ERROR: COMMAND whitelist.<" << CMDS[0] << "> NOT FOUND PLEASE CHECK SPELLING AND CAPITALIZATION" << endl;
		}
	}

	void hROOM()
	{
		if (CMDS[1] == "create")
		{
			// ADD ROOM CMDS[2] TO LIST OF AVAILABLE ROOMS
		}
		else if (CMDS[1] == "delete")
		{
			// DELETE ROOM CMDS[2] TO LIST OF AVAILABLE ROOMS
		}
		else if (CMDS[1] == "list")
		{
			// LIST AVAILABLE ROOMS
		}
		else
		{
			cout << "COMMAND ERROR: COMMAND whitelist.<" << CMDS[0] << "> NOT FOUND PLEASE CHECK SPELLING AND CAPITALIZATION" << endl;
		}
	}
};