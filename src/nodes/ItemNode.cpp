#include "nodes/ItemNode.h"

#include <cstring>

ItemNode::ItemNode(pugi::xml_node *xmlNode) {
	this->parseChildren(xmlNode);
}

void ItemNode::parseChild(pugi::xml_node *child) {
	if (strcmp(child->name(), "name") == 0) {
		this->name = new string(child->child_value());
	}
	else if (strcmp(child->name(), "completed") == 0) {
		if (strcmp(child->child_value(), "true") == 0) {
			this->completed = true;
		}
		else if (strcmp(child->child_value(), "false") == 0) {
			this->completed = false;
		}
	}
}
