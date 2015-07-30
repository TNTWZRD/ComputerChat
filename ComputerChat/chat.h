#pragma once

#ifndef CHAT_H
#define CHAT_H

#include <iostream>
#include <conio.h>

#include "clientSocket.h"
#include "hostSocket.h"
#include "user.h"

class Chat
{
public:
    // Public constructor
    Chat();

    virtual ~Chat();
};

#endif // defined(CHAT_H)
