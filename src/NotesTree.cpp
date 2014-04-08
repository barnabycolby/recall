#include "NotesTree.h"

#include <iostream>
#include "pugixml.hpp"

#include "InvalidNotesTree.h"

using namespace std;

/**
 * \brief Constructs a NotesTree object from a file
 * \detail Constructs a NotesTree object from a file, by parsing it and creating a tree that reflects the data in the file
 * \param filePath The path of the file to construct the NotesTree object from
 */
NotesTree::NotesTree(const char* filePath) {
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
	this->root = new CategoryNode(&rootXMLNode);
}
