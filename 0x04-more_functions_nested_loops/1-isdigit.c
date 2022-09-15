#include "main.h"

/**
* _isdigit - checks for a digit
*
* @c: character to check
* 
* Returns: 1 if c is a digit,
* and 0 otherwise
*/

int _isdigit(int c)
{
	return (c >= 48 && c <= 57);
}