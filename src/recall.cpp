#include <iostream>
#include <QtWidgets/QApplication>

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
	RecallModel* recallModel = new RecallModel(argv[1]);
	
	// Create the view
	QApplication *qApplication = new QApplication(argc, argv);
	RecallView* recallView = new RecallView(recallModel);

	// Execute the application
	int returnValue = qApplication->exec();

	// Don't forget to cleanup
	delete recallModel;
	delete recallView;
	delete qApplication;

	// Return
	return returnValue;
}

/**
 * Prints the usage instructions of the program
 */
void printUsageInstructions() {
	cout << "Usage: recall fileContainingThoughts" << endl;
}
