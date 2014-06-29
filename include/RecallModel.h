#ifndef RECALL_MODEL_H
#define RECALL_MODEL_H

#include "nodes/Node.h"

#include <vector>

using namespace std;

class RecallModel {
public:
	RecallModel(char *modelFile);

	vector<Node*> *getNodes();

private:
	void addChild(Node *childNode);
	vector<Node*> *nodes;
};

#endif
