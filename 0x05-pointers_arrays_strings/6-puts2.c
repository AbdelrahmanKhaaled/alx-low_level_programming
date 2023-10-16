#include "main.h"
#include <string.h>

/**
 * puts22 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: checks input of function.
*/

void puts2(char *str)
{
	unsigned long int i;

	for (i = 0 ; i < strlen(str) ; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
