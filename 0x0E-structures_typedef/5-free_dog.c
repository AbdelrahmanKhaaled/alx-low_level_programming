#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs.
 *
 * @d: checks input of function
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		free(d);
}
