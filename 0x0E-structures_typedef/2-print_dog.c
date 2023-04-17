#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a struct dog.
 * @d: pointer to struct.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("name: %s\n", (d->name == NULL) ? "(nil)" : d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->name == NULL) ? "(nil)" : d->owner);
}