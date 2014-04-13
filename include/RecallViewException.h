#ifndef RECALL_VIEW_EXCEPTION_H
#define RECALL_VIEW_EXCEPTION_H

#include <exception>
#include <string>

using namespace std;

class RecallViewException : public exception {
public:
	RecallViewException(string exceptionMessage);

	virtual const char* what() const throw();

private:
	string message;
};

#endif
