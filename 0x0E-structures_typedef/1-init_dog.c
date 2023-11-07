#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog.
 *
 * @d: checks input of function
 * @name: checks input of function
 * @age: checks input of function
 * @owner: checks input of function
 *
 * Return: void.
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner - owner;
	}
}
