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
	unsigned int i, size1 = 0, size2 = 0, m;

	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	ar = malloc(sizeof(char) * (size1 + size2 + 1));
	if (ar == NULL)
		return (NULL);
	for (i = 0; i < (size1); i++)
		ar[i] = s1[i];
	m = size1;
	for (i = 0; i < (size2 + size1 + 1); i++)
	{
		ar[m] = s2[i];
		m++;
	}

	return (ar);
}
