#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string.
 *
 * @s: checks input of function
*/

void rev_string(char *s)
{
	int i;
	int count;
	char ch[strlen(s)];

        for (i = strlen(s) - 1; i >= 0 ; i--)
	{
		ch[count] = s[i];
	}
	_putchar('\n');
}
