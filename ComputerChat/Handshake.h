#pragma once

#ifndef HANDSHAKE_H
#define HANDSHAKE_H

#include <cstdio>
#include <basetd.h>

#include "ClientMode.h"
#include "HostMode.h"

#include "typekey.h"

class Handshake : protected ClientMode
{

    public:
        Handshake();

        DWORD32 commitHandshake(string _sPass) : _serverPassword(_sPass);

        long traceShake(std::vector<long> tracePath) __KEY_EXPORT;
};

#endif // defined(HANDSHAKE_H)
