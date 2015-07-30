#pragma once

#ifndef USER_H
#define USER_H

#include <string>
#include <vector>

using namespace std;

class user
{
public:
	string UserName;
	vector<string> conversation;
	user(string name);
private:

};

#endif // defined(USER_H)