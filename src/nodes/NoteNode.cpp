#include "nodes/NoteNode.h"

NoteNode::NoteNode(rapidxml::xml_node<> *xmlNode) {
	this->note = new string(xmlNode->value());
}

NodeType NoteNode::getType() {
	return NOTE;
}

string *NoteNode::getNote() {
	return this->note;
}
