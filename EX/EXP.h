#ifndef EXP_H
#define EXP_H
#include <exception>
#include <stdexcept>
#include <string>
class Existential_Exception : public std::logic_error 
{
	public:
		Existential_Exception() : std::logic_error(
		"\nExistential Crisis\n") { } 
};

#endif
