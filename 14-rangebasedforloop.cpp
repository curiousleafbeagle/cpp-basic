#include <stdio.h>
#include <iostream>

#include <string>
using namespace std;

int main()
{
    string wow ="INTJ";
    for (char i : wow)
     {
            cout << "[" << i << "]";  
        }
        cout << '\n';
        return 0;
}