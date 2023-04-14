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
	char *ar;
	unsigned int i = 0, size1 = 0, size2 = 0, ii = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1 && s1[size1])
		size1++;
	while (s2 && s2[size2])
		size2++;
	if (n > size2)
		ar = malloc(sizeof(char) * (size2 + size1 + 1));
	else
		ar = malloc(sizeof(char) * (n + size1 + 1));
	if (ar == NULL)
		return (NULL);

	while (s1 && i < size1)
	{
		ar[i] = s1[i];
		i++;
	}
	while (ii < n && s2)
	{
		ar[i++] = s2[ii++];
	}
	ar[i] = '\0';

	return (ar);
}
