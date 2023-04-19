#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int s1 = 0;
	int s2 = 0;
	
	
	dog = malloc(sizeof(dog_t));
	while (name[s1])
		s1++;
	while (name[s2])
		s2++;
	dog-> name = malloc(sizeof(sizeof(char) * (s1 + 1)));
	dog-> owner = malloc((s2 + 1) * sizeof(char));
	dog-> owner = owner;
	dog-> name = name;
	dog-> age = age;

	return (dog);
}
