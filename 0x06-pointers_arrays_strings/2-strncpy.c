#include "main.h"
/**
 * _strncat - copies a string.
 *  @dest: first string.
 *  @src: last string.
 *  @n: number of bytes used.
 *  Return: Always dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, len = 0, len2 = 0;

	while (dest[len])
		len++;
	while (src[len2])
		len2++;
	if (n >= len2)
		n = len2;
	while (i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
