#include "dog.h"
/**
 * init_dog - initializes a dog struct
 * @d: pointer to dog d
 * @name: member 1 of dog struct
 * @age: mem2 of dog struct
 * @owner: mem3 of dog struct
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name, name;
	d->age = age;
	d->owner = owner;
}
