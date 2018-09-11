#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	string one = "This is the first string.";
    string two ("This is the second string.");
    // std::string three= {"This is the third string."}; --  must be initialized by constructor
	cout << one << endl;
    cout << two;

	return 0;
}