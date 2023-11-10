#include "variadic_functions.h"
#include <string.h>

/**
 * print_all - prints anything.
 *
 * @format: checks input of function
*/

void print_all(const char * const format, ...)
{
	va_list args;
	const char *frmt;
	char ch;
	int num;
	double ratio;
	const char *str;
	unsigned int count;

	frmt = format;
	count = strlen(format);
	
	while (*frmt)
	{
		if (*frmt == 'c')
		{
			ch = va_arg(args, int);
			printf("%c, ", ch);
		}
		else if (*frmt == 'i')
		{
			num = va_arg(args, int);
			printf("%d, ", num);
		}
		else if (*frmt == 'f')
		{
			ratio = va_arg(args, double);
			printf("%f, ", ratio);
		}
		else if (*frmt == 's')
		{
			str = va_arg(args, const char*);
			printf("%s, ", str);
		}
		frmt++;
	}
}
