#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string yourtext;
    do {
        cout << "Write your message: ";
        cin >> yourtext;
        cout << "Your message: " << yourtext << '\n';
    }
    while (yourtext !="adios");
    cout << "Conversation ended." << endl;
    system("pause");
    return 0;
}