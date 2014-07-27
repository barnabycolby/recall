#ifndef LIST_ITEM_H
#define LIST_ITEM_H

#include <string>

using namespace std;

class ListItem {
public:
	ListItem(string itemText, bool completed);
	string getText();
	bool isCompleted();

private:
	string text;
	bool completed;
};

#endif
