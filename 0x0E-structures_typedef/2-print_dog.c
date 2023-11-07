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
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
