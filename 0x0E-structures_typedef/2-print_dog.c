#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints dog struct
 * @d: pointer to dog struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		exit(1);
	}
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
