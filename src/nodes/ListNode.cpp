#include "nodes/ListNode.h"

#include <cstring>

ListNode::ListNode(pugi::xml_node *xmlNode)
: Node()
{
	this->parseChildren(xmlNode);
}

void ListNode::parseChild(pugi::xml_node *child) {
	if (strcmp(child->name(), "name") == 0) {
		this->name = new string(child->child_value());
	}
	else if (strcmp(child->name(), "item") == 0) {
		this->addItem(new ItemNode(child));
	}
}

void ListNode::addItem(ItemNode *item) {
	this->items.push_back(item);
}

ListNode::~ListNode() {
	if (this->name) {
		delete this->name;
	}
}
