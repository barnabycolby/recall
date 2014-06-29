#ifndef NOTE_NODE_H
#define NOTE_NODE_H

#include "nodes/Node.h"

#include "rapidxml/rapidxml.hpp"
#include <string>

using namespace std;

class NoteNode : public Node
{
public:
	NoteNode(rapidxml::xml_node<> *xmlNode);

private:
	string *note;
};

#endif
