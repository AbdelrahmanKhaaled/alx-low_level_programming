#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is alphabet
 *     otherwise always 0 (Success)
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
