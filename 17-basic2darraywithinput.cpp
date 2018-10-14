#include <stdio.h>
#include <iostream>

using namespace std;
int main(int argc, char **argv)
{
	// array declaration as string with values
	int number[5] = {1, 2, 3, 4, 5};
    // will print the given values using for-loop
	cout << "Current existing numbers are:" << endl;
	for(int count = 0; count < 5; count++)
		{
			cout << number[count] << endl;
		}
    // store and replace the given values with the user's input
	cout << "----------------------------------------" << endl;
	cout << "Replace current numbers [five numbers to be exact]: " << endl;
	for(int count = 0; count < 5; count++)
		{
			cin >> number[count];
		}	
    // will print the latest values inside the array using for loop
	cout << "----------------------------------------" << endl;
	cout << "Current numbers have been replaced by the user." << endl;
	cout << "Here's the output!"<< endl;
	for(int count = 0; count < 5; count++)
		{
			cout << number[count] << endl;
		}
	system("pause");
	return 0;
}
