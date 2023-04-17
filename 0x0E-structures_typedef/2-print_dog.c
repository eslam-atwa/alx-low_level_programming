#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog(struct dog *d) - prints a struct dog.
 * @d: pointer to struct.
 */
void print_dog(struct dog *d)
{

	printf("name: %s\n", (d->name == NULL)? "(nil)" : d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->name == NULL)? "(nil)" : d->owner);
}
