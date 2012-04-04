// definition file for Encryption class

#include "Encryption.h"

//getIndex matches the letter of the file to that in the array 
int Encryption::getIndex(char c) 
{
	c = tolower(c);

	for (int i = 0; i < 26; ++i)
	{
		//comparing given character to each
		// character in alphabet array
		if (_alphabet[i] == c) 
		{
			// if character is the same, return index
			// so we know what letter the char is
			return i;
		}
	}
}

//transform will be given 1 character at a time
//the character will be shifted a given number of characters 
//over in the alphabet
//with the given number of characters given by _key
//returns the encrypted character
char Encryption::transform(char ch)
{
	char newIndex;

	// changes the index by the given key
	// using mod 26 makes sure we only have 0-25 in the array
	newIndex = (getIndex(ch) + _key) % 26;

	return _alphabet[newIndex];
	
}