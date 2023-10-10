#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: checks input of function
 *
 * Return: returns n if 'n' is greater than or equal to zero
 *     returns -n if 'n' is less than zero
*/

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
