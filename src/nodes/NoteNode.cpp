#include "nodes/NoteNode.h"

NoteNode::NoteNode(rapidxml::xml_node<> *xmlNode) {
	this->note = new string(xmlNode->value());
}
