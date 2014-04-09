#ifndef CATEGORY_NODE_H
#define CATEGORY_NODE_H

#include "nodes/Node.h"

class CategoryNode : public Node {
public:
	// Constructor
	CategoryNode(pugi::xml_node *xmlNode);
private:
	void parseChild(pugi::xml_node *child);
};

#endif
