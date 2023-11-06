#include "dog.h"

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
	dog_t new_dog;

	new_dog.name = name;
	new_dog.age = age;
	new_dog.owner = owner;

	return (&new_dog);
}
