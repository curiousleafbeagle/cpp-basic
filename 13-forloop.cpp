#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Please enter a number: ";
    cin >> number;
    for (number; number > 0; number--) {
        cout << number << endl;
    }
    cout << "FIN!\n";
    system("pause");
    return 0;
}
