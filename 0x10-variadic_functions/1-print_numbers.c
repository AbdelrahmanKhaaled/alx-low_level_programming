#include "variadic_functions.h"

/**
 * print_numbers -  prints numbers, followed by a new line.
 *
 * @separator: checks input of function
 * @n: checks input of function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;

	va_start(args, n);
	if (separator != NULL)
	{
		for (i = 0 ; i < n - 1 ; i++)
			printf("%d%s", va_arg(args, int), separator);
		printf("%d\n", va_arg(args, int));
	}
	else
		printf("\n");
}
