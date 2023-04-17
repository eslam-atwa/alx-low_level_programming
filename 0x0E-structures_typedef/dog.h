#ifndef DOG_H
#define DOG_H

/**
 * struct dog - for woof.
 * @name: name.
 * @age: age.
 * @owner: owner.
 */
typedef struct
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
