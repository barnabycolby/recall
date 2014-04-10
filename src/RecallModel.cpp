#include "RecallModel.h"

#include <iostream>
#include "pugixml.hpp"

#include "InvalidNotesTree.h"

using namespace std;

/**
 * \brief Constructs a RecallModel object from a file
 * \detail Constructs a RecallModel object from a file, by parsing it and creating a tree that reflects the data in the file
 * \param filePath The path of the file to construct the RecallModel object from
 */
RecallModel::RecallModel(const char* filePath) {
	// Parse the xml file
	pugi::xml_document doc;
	if (!doc.load_file(filePath)) {
		// The document could not be parsed
		cout << "Failed to parse " << filePath << endl;
		throw new InvalidNotesTree("Failed to parse file");
	}

	// The root node should be a notestree node
	pugi::xml_node rootXMLNode = doc.child("notestree");
	if (rootXMLNode == NULL) {
		throw new InvalidNotesTree("Root node was not a notestree node");
	}

	// Store the node
	// The xyz class constructor also parses child nodes
	this->root = new ContainerNode(&rootXMLNode);
}
