#include "function_pointers.h"

/**
 * op_add - add two numbers
 *
 * @a: checks input of function
 * @b: checks input of function
 *
 * Return: returns sumation of two numbers.
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracion two numbers
 *
 * @a: checks input of function
 * @b: checks input of function
 *
 * Return: returns difference of two numbers.
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication two numbers
 *
 * @a: checks input of function
 * @b: checks input of function
 *
 * Return: returns multiplication of two numbers.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division two numbers
 *
 * @a: checks input of function
 * @b: checks input of function
 *
 * Return: returns division of two numbers.
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - module two numbers
 *
 * @a: checks input of function
 * @b: checks input of function
 *
 * Return: returns module of two numbers.
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

