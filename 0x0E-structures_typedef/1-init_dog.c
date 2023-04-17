#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initilaizes a struct dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		struct dog *d = malloc(sizeof(*d));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
