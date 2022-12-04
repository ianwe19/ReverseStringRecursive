// INCLUDES
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
	char lastLetter = reverseMe[0];
	int i = 0;

	// base case
	if (reverseMe[0] == NULL) {
		return 1;
	}

	// recursive case
	else {
		// store the first char in string
		lastLetter = reverseMe[0];

		// rewrite string without first char
		i = 0;
		while (reverseMe[i] != NULL) {
			reverseMe[i] = reverseMe[i + 1];
			i++;
		}

		// recursive call
		ReverseStringRecursive(reverseMe);


		// after recursing is complete, append stored char to end of string
		i = 0;
		while (reverseMe[i] != NULL) {
			i++;
		}

		reverseMe[i] = lastLetter;

		// add null char to end
		reverseMe[i + 1] = NULL;
	}

	return 0;
}
