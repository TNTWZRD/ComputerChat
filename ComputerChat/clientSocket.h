#pragma once

#ifndef CSOCK_H
#define CSOCK_H

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

class clientSocket
{
public:
    /**
     * \param _portno - Default client port
     * \param clientUID - Default client user ID
     */
    clientSocket(int _portno, string clientUID);

    bool ConnectToHost(int PortNo, char* IPAddress);
	
    void CloseConnection();

    // Deconstructor
    virtual ~clientSocket();
};

#endif // defined(CSOCK_H)
