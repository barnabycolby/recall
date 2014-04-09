#ifndef NOTE_NODE_H
#define NOTE_NODE_H

#include "nodes/Node.h"

#include <string>

using namespace std;

class NoteNode : public Node {
public:
	// Constructor
	NoteNode(pugi::xml_node *xmlNode);

	// Destructor
	~NoteNode();

private:
	string* note;

	void parseChild(pugi::xml_node *child);
};

#endif
