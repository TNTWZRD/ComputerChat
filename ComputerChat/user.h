#pragma once

#include <string>
#include <vector>

using namespace std;

class User
{
public:
    string UserName;
    vector<string> conversation;

public:

    // Public Constructor
	User(string name);

    // Public Deconstructor
    virtual ~User();
};

