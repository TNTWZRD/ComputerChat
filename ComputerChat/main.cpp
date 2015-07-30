#include <iostream>
#include <conio.h>
#include "chat.h"

using namespace std;


int main()
{
	bool endall = 0;
	while (!endall)
	{
		chat ChatInitialize;

		cout << "Press SPACE to end the program, press any other key to continue." << endl;
		char i = _getch();
		if (i == ' ')
			endall = 1;
	}

	return 0;
}