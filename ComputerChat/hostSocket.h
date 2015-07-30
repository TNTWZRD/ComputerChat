#pragma once

#ifndef HSOCK_H
#define HSOCK_H

#include <Windows.h>
#include <winsock.h>

class hostSocket
{
public:
    /**
     * \brief Listens on main port
     * \param portno - INT 
     */
    int ListenOnPort(int portno);

    // Close main host socket connection
    void CloseConnection();
};


#endif // defined(HSOCK_H)
