#ifndef LIST_NODE_H
#define LIST_NODE_H

#include "nodes/Node.h"

#include "rapidxml/rapidxml.hpp"

#include "nodes/ListItem.h"
#include <string>
#include <vector>

using namespace std;

class ListNode : public Node
{
public:
	ListNode(rapidxml::xml_node<> *rootNode);

	NodeType getType();
	string getName();
	int numberOfItems();
	vector<ListItem*> *getItems();

private:
	string name;
	vector<ListItem*> *items;

	void addListItem(ListItem *itemToAdd);
};

#endif
