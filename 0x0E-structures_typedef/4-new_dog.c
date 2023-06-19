#include "dog.h"
#include <stdlib.h>
/**
 * new_dog  - creates new dog from dog struct
 * @name: nameof the new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: 0 on success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len_n, len_o;
	dog_t *new_d;

	new_d = malloc(sizeof(new_d));

	if (new_d == NULL)
	{
		free(new_d);
		return (NULL);
	}
	for (len_n = 0; name[len_n] != '\0';)
		len_n++;
	new_d->name = malloc(sizeof(new_d->name) * len_n);

	if (new_d->name == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}
	for (i = 0; i <= len_n; i++)
	{
		new_d->name[i] = name[i];
	}
	new_d->age = age;
	for (len_o = 0; owner[len_o] != '\0';)
		len_o++;
	new_d->owner = malloc(sizeof(new_d->owner) * len_o);
	if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d->owner);
		free(new_d);
		return (NULL);
	}
	for (i = 0; i <= len_o; i++)
	{
		new_d->owner[i] = owner[i];
	}
	return (new_d);
}
