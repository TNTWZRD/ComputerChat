#pragma once

#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

using namespace std;

class User
{
public:
    // Public constructor
    User(string name);

	
    string UserName;
    vector<string> conversation;
	
    // Deconstructor
    virtual ~User();
private:

};

#endif // defined(USER_H)