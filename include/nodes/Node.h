#ifndef NODE_H
#define NODE_H

#include "pugixml.hpp"

class Node {
protected:
	// Parses the children by passing each child to the parseChild function
	void parseChildren(pugi::xml_node *xmlNode);

	// Abstract parse children method
	virtual void parseChild(pugi::xml_node *child) = 0;
};

#endif
