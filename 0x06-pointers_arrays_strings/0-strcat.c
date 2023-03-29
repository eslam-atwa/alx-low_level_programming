#include "main.h"
/**
 * _strcat - concatenates two strings.
 *  @dest: first string.
 *  @src: last string.
 *  Return: Always dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, len = 0;

	while (dest[len])
		len++;
	while (src[i])
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
