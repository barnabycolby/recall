#ifndef NOTES_TREE_H
#define NOTES_TREE_H

#include "nodes/ContainerNode.h"

/**
 * \author Barnaby Colby
 * \brief Stores notes in a tree
 * \details Stores note objects in a hierarchical tree-like structure, where notes are divided into categories
 */
class RecallModel {
public:
	// Constructor
	RecallModel(const char *filePath);

private:
	ContainerNode *root;
};

#endif
