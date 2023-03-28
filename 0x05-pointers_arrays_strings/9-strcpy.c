#include "main.h"

/**
 * _strcpy - copy a string.
 *
 * @dest: will be returned.
 * @src: will be copied.
 *
 * Return: Always dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	for (i = 0; src[i]; i++)
	{
		len++;
	}
	for (i = 0; i != len; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
