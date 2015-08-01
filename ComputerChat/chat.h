#pragma once

#ifndef CHAT_H
#define CHAT_H

#include <iostream>
#include <cstdint>
#include <conio.h>

#include "clientSocket.h"
#include "hostSocket.h"
#include "user.h"

class Chat
{
public:
    // Public constructor
    Chat();

    std::vector<int> createVar(std::vector<int> _rval)
    {
        if(ret <= 0)
        {
            
        }
        return _rval;
    }

    // Deconstructor
    virtual ~Chat();
};

#endif // defined(CHAT_H)
