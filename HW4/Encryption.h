// specification file for the encrytption class
// the encryption class is derived from the Filter class

#ifndef ENCRYPTION_H
#define ENCRYPTION_H
#include "Filter.h"

class Encryption : public Filter
{

private:
	//how far we will shift
	int _key;

	//alphabet to use in our shifting
 	char _alphabet[26];

public: 

	//constructor sets key and initializes alphabet array
	Encryption(int n) : Filter()
	{
		char _alphabet_initializer[] = {'a', 'b', 'c', 'd', 'e', 'f', 
	'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 
	's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	//I can't figure out why it won't let me initialize _alphabet directly
		for (int i = 0; i < 26; ++i)
		{	
			_alphabet[i] = _alphabet_initializer[i];
			
		}

		_key = n;
	}

	virtual char transform(char ch);

	int getIndex(char c);

};





#endif