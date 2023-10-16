#include "main.h"
#include <string.h>

/**
 * _atoi - convert a string to an integer.
 *
 * @s: checks input of function
 *
 * Return: returns 1 if 'c' is alphabet
 *     otherwise always 0 (Success)
*/

int _atoi(char *s)
{
	unsigned int i;
	int num = 0;
	char ch = '+';

	for (i = 0 ; i < strlen(s) ; i++)
	{
		if (num > 0 && !(s[i] >= '0' && s[i] <= '9'))
			break;
		else
		{
			if (s[i] == '-' && ch == '-')
				ch = '+';
			else if (s[i] == '+' && ch == '-')
				ch = '-';
			else if (s[i] == '-' && ch == '+')
				ch = '-';
			else if (s[i] == '+' && ch == '+')
				ch = '+';
			else if (s[i] >= '0' && s[i] <= '9')
				num = (num * 10) + (s[i] - 48);
		}

	}
	if (ch == '+')
		return (num);
	else
		return (-num);
}
