#ifndef RECALL_VIEW_H
#define RECALL_VIEW_H

#include <SDL2/SDL.h>

#include "RecallModel.h"

class RecallView {
public:
	// Constructor
	RecallView(const RecallModel *recallModel);

	// Destructor
	~RecallView();

private:
	const RecallModel *model;
	SDL_Window *window;
};

#endif
