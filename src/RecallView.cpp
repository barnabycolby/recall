#include "RecallView.h"

#include <QtCore/QThread>
#include <QtGui/QPainter>

#include <iostream>

#include "nodes/NoteNode.h"

RecallView::RecallView(RecallModel *recallModel)
: QWidget(0), model(recallModel)
{
	this->setAttribute(Qt::WA_TranslucentBackground);
	this->showFullScreen();
}

void RecallView::paintEvent(QPaintEvent *) {
	// Set general paint settings
	QPainter painter(this);
	painter.setRenderHint(QPainter::Antialiasing);
	painter.setPen(Qt::NoPen);

	// Get the nodes
	vector<Node*> *nodes = this->model->getNodes();
	int numberOfNodes = nodes->size();

	// Calculate variables used to achieve prettiness
	int screenWidth = this->width();
	int screenHeight = this->height();
	int nodeHeightWithPadding = screenHeight - 20;
	int nodeWidth = screenWidth / numberOfNodes;
	int nodeWidthWithPadding = nodeWidth * 0.8;

	// Iterate through and draw each node
	for (int i = 0; i < nodes->size(); i++) {
		Node *node = nodes->at(i);
		NodeType type = node->getType();
		if (type == NOTE) {
			// Draw the square background
			painter.setBrush(QColor(0, 255, 0, 150));
			int x = (i * nodeWidth) + (0.1 * nodeWidth);
			int y = 10;
			int width = nodeWidthWithPadding;
			int height = nodeHeightWithPadding;
			painter.drawRect(x, y, width, height);

			// Draw the text
			painter.setPen(QColor(0, 0, 0, 150));
			string text = *((NoteNode*)node)->getNote();
			QString qtext(text.c_str());
			painter.drawText(x, y, width, height, Qt::AlignCenter, qtext);
		}
	}

}
