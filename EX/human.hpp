#include <iostream>
#include "EXP.h"

class Human
{
	public:
		bool exist();
		void purpose(const std::string&);
	private:
		bool ext;
		std::string P; /* Purpose */

};
/* checks for the objects existance */
bool Human::exist()
{
	/* Do I really exist? */
	/* Cogito ergo sum */
	if (this != NULL) {
		ext = true;
	}
	return ext;
}

void Human::purpose(const std::string& purp="")
{
		if (purp == "")
			throw(Existential_Exception());
		else
			P = purp;
}
