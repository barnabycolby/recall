#include <iostream>

using namespace std;

// Forward declaration of printUsageInstructions
void printUsageInstructions();

int main(int argc, char* argv[]) {
	// Check if we were given the number of arguments we expected
	if (argc != 2) {
		printUsageInstructions();
		return 1;
	}
}

/**
 * Prints the usage instructions of the program
 */
void printUsageInstructions() {
	cout << "Usage: recall fileContainingThoughts" << endl;
}
