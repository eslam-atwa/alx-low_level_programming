#include <stdlib.h>
/**
 * _strdup - duplicates a string.
 * Return: returns a pointer if successful.
 * @str: the String.
 */
char *_strdup(char *str)
{
	char *ar;
	unsigned int i, size;

	if (str == NULL)
		return (NULL);

	while (str[size])
	{
		size++;
	}
	ar = malloc(sizeof(char) * (size + 1));
	for (i = 0; i < (size + 1); i++)
		ar[i] = str[i];

	return (ar);
}