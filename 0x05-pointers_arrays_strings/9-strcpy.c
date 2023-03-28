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
	int len, i = 0, m;

	while (src[i])
	{
		i++;
		len++;
	}
	for (m = 0; m < len; m++)
	{
		dest[m] = src[m];
	}

	return (dest);
}
