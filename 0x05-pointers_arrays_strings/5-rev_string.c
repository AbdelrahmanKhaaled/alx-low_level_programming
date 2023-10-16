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
	int count = 0;
	char *ch = "";

	for (i = strlen(s) - 1; i >= 0 ; i--)
	{
		ch[count] = s[i];
		count++;
	}
	_putchar('\n');
}
