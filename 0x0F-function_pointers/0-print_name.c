#include "function_pointers.h"

/**
 * print_name - prints a name.
 *
 * @name: checks input of function
 * @f: checks input of function
 *
*/


void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
