#pragma once

#ifndef HANDSHAKE_H
#define HANDSHAKE_H

#include <cstdio>
#include <basetsd.h>

#include "ClientMode.h"
#include "HostMode.h"

#include "typekey.h"

class Handshake : protected ClientMode
{

    public:
        Handshake();

        Handshake* commitHandshake(string _sPass);

        long traceShake(std::vector<long> tracePath) __KEY_EXPORT;
};

#endif // defined(HANDSHAKE_H)
