#ifndef NOTES_TREE_H
#define NOTES_TREE_H

#include "nodes/CategoryNode.h"

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
	CategoryNode *root;
};

#endif
