#include "nodes/CategoryNode.h"

CategoryNode::CategoryNode(pugi::xml_node *xmlNode)
{
	this->parseChildren(xmlNode);
}

void CategoryNode::parseChild(pugi::xml_node *) {
	// Do nothing
}
