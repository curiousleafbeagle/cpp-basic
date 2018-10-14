// Type Deduction: Auto and Dcltype
#include <stdio.h>
#include <iostream>
#include <functional>
using namespace std;

int main ()
{
int foo = 0;
decltype(foo) bar = foo;
cout << bar;

return 0;
}

//not yet completed

