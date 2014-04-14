#include "RecallView.h"

#include <QtCore/QThread>
#include <QtGui/QPainter>

#include "RecallViewException.h"

RecallView::RecallView(const RecallModel *recallModel)
: QWidget(0), model(recallModel)
{
	this->setAttribute(Qt::WA_TranslucentBackground);
	this->showFullScreen();
}

void RecallView::paintEvent(QPaintEvent *) {
	QPainter painter(this);
	painter.setRenderHint(QPainter::Antialiasing);
	painter.setPen(Qt::NoPen);
	painter.setBrush(QColor(200, 200, 200, 200));

	painter.drawRect(0, 0, this->width(), this->height());
}
