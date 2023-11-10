#include "variadic_functions.h"
#include <string.h>

/**
 * 
 *
 * @c: checks input of function
 *
 * Return: returns 1 if 'c' is alphabet
 *    otherwise always 0 (Success)
*/

void print_all(const char * const format, ...)
{
	va_list args;
	const char *frmt;
	char ch;
	int num;
	float ratio;
	const char *str;

	frmt = format;
	va_start(args, strlen(format));
	while(*frmt)
	{
		if (*frmt == 'c')
		{
			ch = va_arg(args, const char*);
			printf("%c, ", ch);
		}
		else if (*frmt == 'i')
		{
			num = va_arg(args, int);
			printf("%d, ", num);
		}
		else if (*frmt == 'f')
		{
			ratio = va_arg(args, float);
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
