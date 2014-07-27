#include "nodes/ListNode.h"

#include <cstring>

ListNode::ListNode(rapidxml::xml_node<> *rootNode)
: items(new vector<ListItem*>())
{
	// Parse the name
	rapidxml::xml_node<> *nameNode = rootNode->first_node("name");
	this->name = nameNode->value();

	// Parse the list items
	rapidxml::xml_node<> *itemNode = rootNode->first_node("item");
	while (itemNode) {
		// Parse the item name
		rapidxml::xml_node<> *itemNameNode = itemNode->first_node("name");
		string itemName = itemNameNode->value();

		// Parse the completed value
		rapidxml::xml_node<> *completedNode = itemNode->first_node("completed");
		bool completed;
		if (strcmp(completedNode->value(), "true") == 0) {
			completed = true;
		}
		else {
			completed = false;
		}

		// Create and store the item
		ListItem *item = new ListItem(itemName, completed);
		this->addListItem(item);

		// Find the next item in the list
		itemNode = itemNode->next_sibling("item");
	}
}

NodeType ListNode::getType() {
	return LIST;
}

string ListNode::getName() {
	return this->name;
}

void ListNode::addListItem(ListItem *itemToAdd) {
	this->items->push_back(itemToAdd);
}

int ListNode::numberOfItems() {
	return this->items->size();
}

vector<ListItem*> *ListNode::getItems() {
	return this->items;
}
