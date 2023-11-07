#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: just a long dog struct in a big kitty world
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

typedef struct dog dog_t;

void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
