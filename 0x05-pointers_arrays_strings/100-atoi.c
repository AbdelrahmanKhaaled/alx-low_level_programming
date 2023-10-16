#include "main.h"
#include <string.h>

/**
 *  
 *
 * @c: checks input of function
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
		if (s[i] == '-' && ch == '-')
			ch = '+';
		else if (s[i] == '+' && ch == '-')
			ch = '-';
		else if (s[i] == '-' && ch == '+')
			ch = '-';
		else if (s[i] == '+' && ch == '+')
			ch = '+';
		else if (s[i] >= '0' && s[i] <= '9')
			num = (num * 10) + (int) (s[i]) ;

	}
	if(ch == '+')
		return (num);
	else
		return (-num);
}
