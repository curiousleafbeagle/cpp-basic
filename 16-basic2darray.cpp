#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	// array declaration as string with values
	int tenth[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    //for-loop for the output
	for(int count = 0; count < 10; count++)
		{
			cout << tenth[count] << endl;
		}
	system("pause");
	return 0;
}
