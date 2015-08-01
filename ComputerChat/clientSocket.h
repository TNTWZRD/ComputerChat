#pragma once

#ifndef CSOCK_H
#define CSOCK_H

#include <cstdint>
#include <winsock.h>

#define MIN_PIPED_OBJECTS 1

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
// Client Port Defaults
// ---------------------
    
unsigned int __defaultPort = 2202;

// ---------------------
// ! Client Port defaults !
// ---------------------

class clientSocket
{
public:
    /**
     * \param _portno - Default client port
     * \param clientUID - Default client name to pass to the server
     */
    clientSocket(int _portno, string clientUID);
    
    bool ConnectToHost(int PortNo, char* IPAddress);
	
    void CloseConnection();

    // Deconstructor
    virtual ~clientSocket();
};

#endif // defined(CSOCK_H)
