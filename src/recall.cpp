#include <iostream>

#include "NotesTree.h"

using namespace std;

// Forward declaration of printUsageInstructions
void printUsageInstructions();

int main(int argc, char* argv[]) {
	// Check if we were given the number of arguments we expected
	if (argc != 2) {
		printUsageInstructions();
		return 1;
	}

	// Parse the structure, and create the object tree that it corresponds to
	const NotesTree* tree = new NotesTree(argv[1]);

	// Don't forget to cleanup
	delete tree;
}

/**
 * Prints the usage instructions of the program
 */
void printUsageInstructions() {
	cout << "Usage: recall fileContainingThoughts" << endl;
}
