// Type Deduction: Auto and Dcltype

#include <iostream>
using namespace std;

int main ()
{
int foo = 0;
auto bar = foo; // the same as: int bar = foo;
cout << bar;

return 0;
}

//not yet completed
