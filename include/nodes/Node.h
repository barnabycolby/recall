#ifndef NODE_H
#define NODE_H

enum NodeType { NOTE };

class Node {
public:
	virtual NodeType getType() = 0;
};

#endif
