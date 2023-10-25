#include "main.h"

/**
 * prime - that returns 1 if the input integer is a prime number,
 * otherwise return 0.
 *
 * @n: checks input of function
 * @r: checks input of function
 *
 * Return: that returns 1 if the input integer is a prime number,
 * otherwise return 0.
*/

int prime(int n, int r)
{
	if (n == r)
		return (1);
	else if ((n % r) == 0)
		return (0);
	else
		return (prime(n, r + 1));
}

/**
 * is_prime_number - that returns 1 if the input integer is a prime number,
 * otherwise return 0.
 *
 * @n: checks input of function
 *
 * Return: that returns 1 if the input integer is a prime number,
 * otherwise return 0.
*/

int is_prime_number(int n)
{
	int r;

	r = 2;
	if (n <= 1)
		return (0);
	else
		return (prime(n, r));
}
