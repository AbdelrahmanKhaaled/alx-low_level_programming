#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees dogs.
 *
 * @d: checks input of function
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		if (d->name == NULL)
			free(d->name);
		if (d->age == NULL)
			free(d->owner);
		free(d);

	}
}
