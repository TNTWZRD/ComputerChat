#pragma once

/*
Code Written And Maintained By Daniel Jajliardo.
All Rights Reserved TheTechSphere 2015
*/

#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Explode
{
public:
	Explode();
	vector<string> explode(string input, char delimeter);
	void explodePrint(vector<string> input);
};