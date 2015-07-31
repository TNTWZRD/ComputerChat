#pragma once

#ifndef CSOCK_H
#define CSOCK_H

#include <cstdint>
#include <winsock.h>

#define MIN_PIPED_OBJECTS 1

#define AUTH_KEY_PATH "%UserProfile%\AppData\Local\CompChat\bin\auth\key\.auth_key"

enum PORT_MESSAGE
{
    SOCK_CANNOT_LISTEN,
    SOCK_WAITING,
    SOCK_DEAD,
    SOCK_TIMEOUT,
    SOCK_CONNECTED,
    SOCK_PIPE_ACTIVE,
};

// ---------------------
// Auth Definitions
// TODO: Put in seperate <auth.h> file. Leave here for now.
// ---------------------

typedef DWORD64 AUTH_L;

// ---------------------
// ! Auth Definitions !
// ---------------------

class clientSocket
{
public:
    /**
     * \param _portno - Default client port
     * \param 
     */
    clientSocket(int _portno, string clientUID);

    bool verifyAuthSignature(const char *path, );
    
    bool ConnectToHost(int PortNo, char* IPAddress);
	
    void CloseConnection();


    virtual ~clientSocket();
};

#endif // defined(CSOCK_H)
