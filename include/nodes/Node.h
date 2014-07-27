#ifndef NODE_H
#define NODE_H

enum NodeType { NOTE, LIST };

class Node {
public:
	virtual NodeType getType() = 0;
};

#endif
