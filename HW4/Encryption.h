// specification file for the encrytption class
// the encryption class is derived from the Filter class

#ifndef ENCRYPTION_H
#define ENCRYPTION_H
#include "Filter.h"

class Encryption : public Filter
{

private:
	int _key;


	const char _alphabet[26] = {'a', 'b', 'c', 'd', 'e', f, g, h,
		i, j, k, l, m, n, o, p, q, r, s, t, u, v, 
		w, x, y, z};

public: 

	//constructor sets key
	Encryption(int n) : Filter()
	{
		_key = n;
	}

	virtual char transform(char ch);

	int getIndex(char c) {
		for (int i = 0; i < 26; ++i)
		{
			if (_alphabet[i] == ch) {
				return i;
			}
		}
	}

};





#endif