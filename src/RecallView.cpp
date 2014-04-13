#include "RecallView.h"

#include <sstream>

#include "RecallViewException.h"

RecallView::RecallView(const RecallModel *recallModel)
: model(recallModel)
{
	// Initialise SDL
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0) {
		this->throwSDLError("SDL_Init Error");
	}
}

void RecallView::throwSDLError(string message) {
	std::ostringstream oss;
	oss << message << ": " << SDL_GetError();
	throw new RecallViewException(oss.str());
}

RecallView::~RecallView() {
	// Destroy the window
	SDL_DestroyWindow(this->window);

	// Quit SDL
	SDL_Quit();
}
