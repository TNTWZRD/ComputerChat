#pragma once

#ifndef AUTH_H
#define AUTH_H

#include <basetsd.h>

#include "typekey.h"

#define AUTH_KEY_PATH "%UserProfile%\AppData\Local\CompChat\bin\auth\key\.auth_key"

#define MAX_AUTH_REQUESTS 5
#define MAX_HANDSHAKES 2

// ---------------------
// Auth Definitions
// ---------------------
    typedef DWORD64 AUTH_L;
// ---------------------
// ! Auth Definitions !
// ---------------------

    /**
     * This verifies the signature of the auth key.
     * It then passes it to the auth server to verify that actual pair.
     */
    bool verifyAuthSignature(const char *path, AUTH_L keylen);

class Auth
{
    public:
        Auth(AUTH_L keylen, const char *path) __KEY_EXPORT;

        virtual ~Auth() __KEY_EXPORT;

    public:
        AUTH_L createAuthKey();
};

#endif // defined(AUTH_H)
