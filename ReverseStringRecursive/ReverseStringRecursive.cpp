// INCLUES
#include <iostream>


// CONSTANTS
const int STRING_SIZE = 100;


// PROTOTYPES
int ReverseStringRecursive(char*);


// MAIN
int main() {
	// create a string
	char someString[STRING_SIZE] = "abcdefghijklmnopqrstuvwxyz";

	// display the string before being reversed
	std::cout << "The string contains: \n";
	std::cout << someString << "\n\n";

	// make the call to the recursive function
	std::cout << "CALL THE REVERSING FUNCTION\n\n";
	ReverseStringRecursive(someString);

	// display the string after being reversed
	std::cout << "\nThe string contains: \n";
	std::cout << someString << "\n";

	// exit program
	return 0;
}


// FUNCTION IMPLEMENTATIONS
int ReverseStringRecursive(char* reverseMe) {
	int i = 0;

	if (*reverseMe == 'z') {
		return 0;
	}

	ReverseStringRecursive(reverseMe + 1);

	std::cout << *reverseMe;

	return 0;
}
