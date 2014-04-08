#ifndef NOTES_TREE_H
#define NOTES_TREE_H

#include "nodes/RootNode.h"

/**
 * \author Barnaby Colby
 * \brief Stores notes in a tree
 * \details Stores note objects in a hierarchical tree-like structure, where notes are divided into categories
 */
class NotesTree {
public:
	// Constructor
	NotesTree(const char *filePath);

private:
	RootNode *root;
};

#endif
