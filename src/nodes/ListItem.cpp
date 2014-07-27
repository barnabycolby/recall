#include "nodes/ListItem.h"

ListItem::ListItem(string itemText, bool completed)
: text(itemText), completed(completed)
{}

string ListItem::getText() {
	return this->text;
}

bool ListItem::isCompleted() {
	return this->completed;
}
