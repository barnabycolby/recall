#include "nodes/ContainerNode.h"

#include <cstring>

#include "nodes/CategoryNode.h"
#include "nodes/NoteNode.h"
#include "nodes/ListNode.h"

ContainerNode::ContainerNode()
: Node()
{}

ContainerNode::ContainerNode(pugi::xml_node *xmlNode)
: Node()
{
	this->parseChildren(xmlNode);
}

void ContainerNode::parseChild(pugi::xml_node *child) {
	if (strcmp(child->name(), "category") == 0) {
		this->addChild(new CategoryNode(child));
	}
	else if (strcmp(child->name(), "note") == 0) {
		this->addChild(new NoteNode(child));
	}
	else if (strcmp(child->name(), "list") == 0) {
		this->addChild(new ListNode(child));
	}
}

void ContainerNode::addChild(Node *child) {
	this->children.push_back(child);
}
