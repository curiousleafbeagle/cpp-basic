#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int start_count = 10;

    while (start_count > 0) {
        cout << start_count << endl;
        --start_count;
    }

    cout << "DONE\n";
    system("pause");
    return 0;
}