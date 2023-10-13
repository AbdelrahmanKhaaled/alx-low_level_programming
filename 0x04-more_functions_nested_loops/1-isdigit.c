#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is digit
 *   otherwise always 0 (Success)
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
