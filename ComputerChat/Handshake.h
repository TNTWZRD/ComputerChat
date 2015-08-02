#pragma once

#ifndef HANDSHAKE_H
#define HANDSHAKE_H

#include <cstdio>
#include <basetd.h>

#include "ClientMode.h"
#include "HostMode.h"

class Handshake : protected ClientMode
{

    public:
        Handshake();

        DWORD32 commitHandshake(string _serverPassword);
};

#endif // defined(HANDSHAKE_H)
