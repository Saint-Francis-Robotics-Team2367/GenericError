// Krishna Mani FRC 2020 : Unreasonably lightweight errors

#ifndef GENERICERROR_H
#define GENERICERROR_H

#include <string>

class GenericError {
	public:
	std::string msg;
	uint8_t loglevel;

	GenericError(std::string, uint8_t);
};

#endif
