#ifndef ITEM_NODE_H
#define ITEM_NODE_H

#include "nodes/Node.h"

#include <string>

using namespace std;

class ItemNode : public Node {
public:
	ItemNode(pugi::xml_node *xmlNode);
	
private:
	void parseChild(pugi::xml_node *child);

	string *name;
	bool completed;
};

#endif
