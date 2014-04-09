#include "nodes/Node.h"

void Node::parseChildren(pugi::xml_node *xmlNode) {
	// Parse each child in turn
	for (pugi::xml_node child : xmlNode->children()) {
		this->parseChild(&child);
	}
}
