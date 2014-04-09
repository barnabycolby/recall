#ifndef LIST_NODE_H
#define LIST_NODE_H

#include "nodes/Node.h"

#include <string>
#include <vector>

#include "nodes/ItemNode.h"

using namespace std;

class ListNode : public Node {
public:
	ListNode(pugi::xml_node *xmlNode);
	~ListNode();

private:
	void parseChild(pugi::xml_node *child);
	void addItem(ItemNode *item);

	string* name;
	vector<ItemNode*> items;
};

#endif
