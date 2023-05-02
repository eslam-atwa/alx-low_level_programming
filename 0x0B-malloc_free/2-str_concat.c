#include <stdlib.h>
/**
 * *str_concat - concatcates two Strings.
 * Return: returns a pointer if successful.
 * @s1: first string.
 * @s2: second string.
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	unsigned int i = 0, size1 = 0, size2 = 0, j = 0;

	while (s1 && s1[size1])
		size1++;
	while (s2 && s2[size2])
		size2++;

	ar = malloc(sizeof(char) * (size1 + size2 + 1));
	if (ar == NULL)
		return (NULL);
	while (i < size1)
	{
		ar[i] = s1[i];
		i++;
	}
	while (i < (size1 + size2))
	{
		ar[i] = s2[j];
		i++;
		j++;
	}
	ar[i] = '\0';

	return (ar);
}
