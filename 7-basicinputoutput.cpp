#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
/* 
    endl = end line
    cout = for formatted output operations
    cin = for formatted input operations

*/
{   
   //cout example 
    int x;
    x = 1;
    cout << "Output sentence" << endl; // prints 'output' sentence on screen 
    cout << 120 << endl;               // prints number 120 on screen
    cout << x << endl;                 // prints the value of x on screen;
    cout << "-----------------" << endl;

   //cin example
    string firstname;
    string lastname;    
    cout << "Please enter your firstname: ";
    cin >> firstname;
    cout << "Please enter your surname: ";
    cin >> lastname;
    cout << "Hello " << firstname << " " << lastname << ".\n";
    system("pause");

    return 0;
}