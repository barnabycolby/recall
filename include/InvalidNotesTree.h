#ifndef INVALID_NOTES_TREE_H
#define INVALID_NOTES_TREE_H

#include <exception>
#include <string>

using namespace std;

class InvalidNotesTree : public exception {
public:
	InvalidNotesTree(string m) : msg(m) {};
	~InvalidNotesTree() throw() {};
	const char* what() const throw() { return msg.c_str(); }

private:
	string msg;
};

#endif
