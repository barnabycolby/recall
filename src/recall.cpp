#include <iostream>

#include "RecallModel.h"
#include "RecallView.h"

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
	const RecallModel* recallModel = new RecallModel(argv[1]);
	
	// Create the view
	const RecallView* recallView = new RecallView(recallModel);

	// Don't forget to cleanup
	delete recallModel;
	delete recallView;
}

/**
 * Prints the usage instructions of the program
 */
void printUsageInstructions() {
	cout << "Usage: recall fileContainingThoughts" << endl;
}
