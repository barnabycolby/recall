#ifndef CATEGORY_NODE_H
#define CATEGORY_NODE_H

#include "nodes/ContainerNode.h"

#include <string>

using namespace std;

class CategoryNode : public ContainerNode {
public:
	// Constructor
	CategoryNode(pugi::xml_node *xmlNode);

	// Destructor
	~CategoryNode();
private:
	string* name;

	void parseChild(pugi::xml_node *child);
};

#endif
