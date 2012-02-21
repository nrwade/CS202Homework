//userInterface header file

#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <string>
using std::string;

	class UserInterface
	{
	public:
		UserInterface(); //constructor

		// create member function 'string'
		string input(string message);

	};

#endif