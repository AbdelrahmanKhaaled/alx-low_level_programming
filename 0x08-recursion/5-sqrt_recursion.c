#include "main.h"

/**
 * sqrtt -  returns the natural square root of a number.
 *
 * @n: checks input of function
 * @root: checks input of function
 *
 * Return:  returns the natural square root of a number.
*/

int sqrtt(int n, int root)
{
	if (root * root > n)
		return (-1);
	else if (root * root == n)
		return (root);
	else
		sqrtt(n, root + 1);
}

/**
 * _sqrt_recursion -  returns the natural square root of a number.
 *
 * @n: checks input of function
 *
 * Return:  returns the natural square root of a number.
*/

int _sqrt_recursion(int n)
{
	int root;

	root = 2;
	if (n == 1)
		return (1);
	else
		return (sqrtt(n, root));
}
