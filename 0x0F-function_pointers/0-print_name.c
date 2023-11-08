#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
*/

void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * print_name - prints a name.
 *
 * @name: checks input of function
 * @f: checks input of function
 *
 * Return: returns 1 if 'c' is alphabet
 *    otherwise always 0 (Success)
*/


void print_name(char *name, void (*f)(char *))
{
	f(name);
}
