#include "variadic_functions.h"
#include <string.h>

/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: checks input of function
 * @n: checks input of function
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	const char *s;

	va_start(args, n);
	if (separator != NULL)
	{
		for (i = 0 ; i < n - 1 ; i++)
		{
			s = va_arg(args, const char*);
			if (s == NULL)
				 printf("%s%s", "(nil)", separator);
			else
				printf("%s%s", s, separator);
		}
		s = va_arg(args, const char*);
		printf("%s\n", s);
	}
	else
		printf("\n");
	va_end(args);
}
