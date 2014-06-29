#ifndef RECALL_VIEW_H
#define RECALL_VIEW_H

#include "RecallModel.h"

#include <QtWidgets/QWidget>

class RecallView : public QWidget {
public:
	// Constructor
	RecallView(RecallModel *recallModel);

protected:
	virtual void paintEvent(QPaintEvent *paintEvent);

private:
	RecallModel *model;
};

#endif
