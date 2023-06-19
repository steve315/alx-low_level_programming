#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function to free the  dog
 * @d: pointer to dog created
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name != NULL)
		{
			free(d->name);
		}
		if (d->owner != NULL)
		{
			free(d->owner);
		}
		free(d);
	}
}
