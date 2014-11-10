#include <iostream>
#include "human.hpp"

using namespace std;

int main() 
{
	Human Alec;
	cout << "Do I exist?\n";
	if (Alec.exist()) {
		cout << "Cogito ergo sum\n";
		cout << "What is my purpose?\n";
		Alec.purpose();
	}
return 0; /* EXIT SUCCESS */
}
