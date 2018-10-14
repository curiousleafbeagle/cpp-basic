#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	// array declaration as string
	string nickname[5];
	// array sequence -- assigned values
	nickname[0] = "max";
	nickname[1] = "dan";
	nickname[2] = "mars";
	nickname[3] = "jom";
	nickname[4] = "tups";

	/*
	 * Basic Array using For-Loop for the output:
	 * for(int count = 0; count < 5; count++)
	 *	{
	 *		cout << nickname[count] << endl;
	 *	}
	 */
	 
	 // Basic Array using single-line outputs
		cout << nickname[0] << endl;
		cout << nickname[1] << endl;
		cout << nickname[2] << endl;
		cout << nickname[3] << endl;
		cout << nickname[4] << endl;
	system("pause");
	return 0;
}
