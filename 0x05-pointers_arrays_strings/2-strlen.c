#include "main.h"

/**
 * _strlen - pprint the length.
 * Return: the size of a string.
 * @s: the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
