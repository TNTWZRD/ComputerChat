#pragma once

#include <iostream>
#include <string>

#include "CLS.h"
#include "clientSocket.h"
#include "user.h"
#include "auth.h"

class ClientMode
{
    public:

        // These values can be set in several ways.
        // Set to 1 for admin status
        // Set to 2 for moderator status
        // Set to 3 for standard user
        //
        // Set to 10 for elevated ROOT status
        // DO NOT ADD USER AS (10) UNLESS YOU KNOW EXPLICITY WHAT THE IMPLICATIONS ARE.
        // THAT USER WILL HAVE ACCESS TO VITAL SERVER SCRIPTS/FILES.
        int _cMode;

        ClientMode();

        // Setter for clientMode
        int setClientMode(int _clientMode)
        {
            _cMode = _clientMode;
            return _cMode;
        }

        // Getter for clientMode
        int getClientMode()
        {
            return _cMode;
        }

    // Redefined as protected for inheritence within <Handshake.h>
    protected:
	void mainMenu();

	string _ip;
	int _port = 2048;
	string _serverPassword;
	string _username;
	string _password;
};

