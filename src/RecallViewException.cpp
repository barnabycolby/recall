#include "RecallViewException.h"

RecallViewException::RecallViewException(string exceptionMessage)
: message(exceptionMessage)
{}

const char* RecallViewException::what() const throw() {
	return (this->message).c_str();
}
