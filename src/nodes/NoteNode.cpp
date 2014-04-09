#include "nodes/NoteNode.h"

#include <cstring>

NoteNode::NoteNode(pugi::xml_node *xmlNode)
: Node()
{
	this->parseChildren(xmlNode);
}

void NoteNode::parseChild(pugi::xml_node *child) {
	if (strcmp(child->name(), "node_pcdata") == 0) {
		this->note = new string(child->value());
	}
}

NoteNode::~NoteNode() {
	if (this->note) {
		delete this->note;
	}
}
