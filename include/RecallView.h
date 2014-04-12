#ifndef RECALL_VIEW_H
#define RECALL_VIEW_H

#include "RecallModel.h"

class RecallView {
public:
	// Constructor
	RecallView(const RecallModel *recallModel);

private:
	const RecallModel *model;
};

#endif
