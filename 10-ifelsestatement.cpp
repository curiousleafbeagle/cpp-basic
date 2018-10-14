#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x;
    cout << "Please enter a number: ";
    cin >> x;
    if (x > 0)
        cout << x << " is a positive integer." << endl;
    else if (x < 0)
        cout << x << " is negative integer." << endl;
    else 
        cout << x << " is equivalent to 0." << endl;
    system("pause");
    return 0;
}