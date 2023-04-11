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

	while (str[size] != '\0')
	{
		size++;
	}
	ar = malloc(sizeof(char) * (size + 1));
	for (i = 0; i < (size); i++)
		ar[i] = str[i];

	ar[i] = '\0';
	return (ar);
}
