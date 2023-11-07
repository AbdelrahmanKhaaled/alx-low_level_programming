#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 *
 * @name: checks input of function
 * @age: checks input of function
 * @owner: checks input of function
 *
 * Return: returns 1 if 'c' is alphabet
 *  otherwise always 0 (Success)
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (!name || age < 0 || !owner)
		return (NULL);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(sizeof(strlen(name) + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(strlen(owner) + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);
}
