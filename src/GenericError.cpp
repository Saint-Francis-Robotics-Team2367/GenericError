#include "GenericError.h"

GenericError::GenericError(std::string msg, uint8_t loglevel) {
	this->msg = msg;
	this->loglevel = loglevel;
}

