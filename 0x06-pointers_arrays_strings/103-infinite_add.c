#include "main.h"

/**
 * 
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is alphabet
 *   otherwise always 0 (Success)
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, n, m, count, k, z;

	count = k = 0;
	if (strlen(n1) >= strlen(n2))
	{
		n = strlen(n1);
		m = strlen(n2);
	}
	else
	{
		n = strlen(n2);
		m = strlen(n1);
	}
	for (i = n - 1; i >= 0 ; i--)
	{
		r[count++] = (((n1[i] - '0') + (n2[i] - '0')) + k) % 10;

		k = (((n1[i] - '0') + (n2[i] - '0')) + k) / 10;
	}
	for (i = 0; i < count / 2; i++)
	{
		z = r[i];
		r[i] = r[count - 1 - i];
		r[count - 1 - i] = z;
	}
	return (r);
}
