#pragma once

#ifndef CHAT_H
#define CHAT_H

#include <iostream>
#include <cstdint>
#include <conio.h>

#include "typekey.h"

#include "clientSocket.h"
#include "hostSocket.h"
#include "user.h"

// Public simplicity keys
struct _simci
{
    UINT32 _cip32;
    UINT32 _fetchkey;
    UINT32 _sendkey;
};

class Chat
{
public:
    // --------------------
    // Public Chat Flags
    // --------------------
    static enum CHAT_FLAG
    {
        USER_TYPING,
        USER_SENT,
        USER_WAITING,
        USER_RECIEVED,
        USER_HALTED_ALL_PROC,
        USER_STARTED_PROC
    };

    // Public constructor
    Chat();

    std::vector<int> createVar(std::vector<int> _rval)
    {
        if(_rval <= 0)
        {
            
        }
        return _rval;
    }

    // Deconstructor
    virtual ~Chat();
};

#endif // defined(CHAT_H)
