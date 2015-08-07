#include "Explode.h"

/*
Code Written And Maintained By Daniel Jajliardo.
All Rights Reserved TheTechSphere 2015
*/

Explode::Explode() {};

vector<string> Explode::explode(string input, char delimeter)
{
	vector<string> explodeString;
	unsigned int inputLength = input.length(); // length of the string to be searched.
	unsigned int inputStart = 0; // Begining of the word or phrase being exploded
	unsigned int inputEnd = 0; // end of the word or phrase being exploded
	unsigned int count = 0; //used so the delimeter is not included in the vector.
	string word; // the word to be pushed back to the vector
	bool searching = true; // if still searching

	while (searching)
	{
		if (input.at(inputEnd) == delimeter) {
			if (count >= 1)
			{
				word = input.substr(inputStart + 1, (inputEnd - inputStart));
			}
			else
			{
				word = input.substr(inputStart, (inputEnd - inputStart));
			}
			explodeString.push_back(word);
			inputStart = inputEnd;
			count++;
		}
		inputEnd++;
		if (inputEnd == inputLength)
		{
			searching = false;
			if (count >= 1)
			{
				word = input.substr(inputStart + 1, (inputEnd - inputStart));
			}
			else
			{
				word = input.substr(inputStart, (inputEnd - inputStart));
			}
			explodeString.push_back(word);
		}

	}

	return explodeString;
}

void Explode::explodePrint(vector<string> input)
{
	for (unsigned int i = 0; i < input.size(); i++)
	{
		cout << input[i] << endl;
	}
}