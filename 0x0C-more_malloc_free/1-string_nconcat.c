#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concates two strings.
 * @s1: first String
 * @s2: second String.
 * @n: The first n bytes of s2.
 * Return: pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1 = 0, size2 = 0, l = 0, i, len;
	char *ar;

	if (s1 != NULL)
	{
		while (s1[size1])
			size1++;
	}
	if (s2 != NULL)
	{
		while (s2[size2])
		size2++;
	}
	else
	{
		size2 = 0;
		n = 0;
	}
	if (n >= size2)
		n = size2;
	len = (size1 + n + 1);
	ar = malloc(sizeof(char) * len);
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < size1; i++)
		ar[i] = s1[i];
	for (i = size1; i < (len - 1); i++)
	{
		ar[i] = s2[l];
		l++;
	}
	ar[len] = '\0';
	return (ar);
}
