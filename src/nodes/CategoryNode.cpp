#include "nodes/CategoryNode.h"

#include <iostream>
#include <cstring>

using namespace std;

CategoryNode::CategoryNode(pugi::xml_node *xmlNode)
{
	this->parseChildren(xmlNode);
}

void CategoryNode::parseChild(pugi::xml_node *child) {
	// The name node is the only node unique to the category node
	if (strcmp(child->name(), "name") == 0) {
		this->name = new string(child->child_value());
	}
	// The container node will do the rest of the parsing for us
	else {
		ContainerNode::parseChild(child);
	}
}

CategoryNode::~CategoryNode() {
	if (this->name) {
		delete this->name;
	}
}
