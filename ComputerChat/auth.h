#pragma once

#ifndef AUTH_H
#define AUTH_H

#include <basetsd.h>

#include "typekey.h"
#include "chat.h"

#define AUTH_KEY_PATH "%UserProfile%/AppData/Local/CompChat/bin/auth/key/.auth_key"

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
    // Private class accessors for flags
    // DO NOT EDIT UNLESS YOU KNOW EXPLICITY WHAT YOU'RE DOING!
    private:
        bool didAuthFinish;
        bool dumpAuthMismatch;
        bool forceAuthMismatch;

    public:
        // Public constructor
        Auth(AUTH_L keylen, const char *path) __KEY_EXPORT;

        // Public deconstructor
        virtual ~Auth() __KEY_EXPORT;

    public:
        AUTH_L createAuthKey(long len,
                             std::string authname,
                             short port,
                             std::string servname
                            ) __KEY_EXPORT;

        AUTH_L acceptKey(struct _simci *keys,
                         std::vector<double> *keylen)
                         __KEY_EXPORT;
};

#endif // defined(AUTH_H)
