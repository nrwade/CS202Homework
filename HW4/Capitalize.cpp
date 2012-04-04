// definition file for class Capitalize

#include "Capitalize.h"

//transform uses toupper to capitalize a given character
char Capitalize::transform(char ch)
{
	char c = toupper(ch);

	return c;
}