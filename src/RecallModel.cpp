#include "RecallModel.h"

#include "rapidxml/rapidxml_utils.hpp"

#include <iostream>
#include <cstring>

#include "nodes/NoteNode.h"

RecallModel::RecallModel(char *modelFile)
: nodes(new vector<Node*>())
{
	// Parse the model file
	rapidxml::file<> xmlFile(modelFile);
	rapidxml::xml_document<> doc;
	doc.parse<0>(xmlFile.data());

	// Get the root node of the model
	rapidxml::xml_node<> *rootNode = doc.first_node("notestree");

	// Parse all the children and store them
	rapidxml::xml_node<> *child = rootNode->first_node();
	while (child) {
		char *nodeType = child->name();
		if (strcmp(nodeType, "category") == 0) {
//			this->addChild(new CategoryNode(child));
		}
		else if (strcmp(nodeType, "note") == 0) {
			this->addChild(new NoteNode(child));
		}
		else if (strcmp(nodeType, "list") == 0) {
//			this->addChild(new ListNode(child));
		}
		child = child->next_sibling();
	}
}

void RecallModel::addChild(Node *childNode) {
	this->nodes->push_back(childNode);
}
