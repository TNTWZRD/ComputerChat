#pragma once

#ifndef CHAT_H
#define CHAT_H

#include <minwindef.h>

#include "clientSocket.h"
#include "hostSocket.h"
#include "user.h"

struct _messageTypes
{
	DWORD64 messageWithMedia; // Message has media (file, picture, link)
	DWORD32 normalMessage;	  // Normal text based message
};

class chat
{
public:
	chat();
};

#endif // defined(CHAT_H)
