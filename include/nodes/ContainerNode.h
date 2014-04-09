#ifndef CONTAINER_NODE_H
#define CONTAINER_NODE_H

#include "nodes/Node.h"

#include <vector>

using namespace std;

class ContainerNode : public Node {
public:
	// Constructor
	ContainerNode();
	ContainerNode(pugi::xml_node *xmlNode);

protected:
	virtual void parseChild(pugi::xml_node *child);

	void addChild(Node *child);

	vector<Node*> children;
};

#endif
