#include "dog.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dog -  prints a struct dog.
 *
 * @d: checks input of function
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("(nil)");
	else
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s", d->name);
	}
}
