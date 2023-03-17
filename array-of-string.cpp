// C++ program to demonstrate
// array of strings using
// string class
#include <iostream>
#include <string>

// Driver code
int main()
{
// Initialize String Array
std::string colour[5]
	= { "What" , "color", "is", "the", "sky?" };

// Print Strings
for (int i = 0; i < 5; i++)
	std::cout << colour[i] << " ";
}
