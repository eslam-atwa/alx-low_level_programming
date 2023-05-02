#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string
 * @str: The String
 *
 * Return: returns pointer if succesfull.
 */
char *_strdup(char *str)
{
	char *ar;
	unsigned int i = 0, size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size])
		size++;

	ar = malloc(sizeof(char) * (size + 1));

	if (ar == NULL)
		return (NULL);

	while (i < size)
	{
		ar[i] = str[i];
		i++;
	}

	return (ar);
}
