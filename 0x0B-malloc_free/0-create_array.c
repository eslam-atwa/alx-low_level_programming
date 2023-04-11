#include <stdlib.h>
/**
 * create_array - creates an array.
 * Return: returns a pointer if successful.
 * @size: the size of the array.
 * @c: the letter to be inisilazed.
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ar = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
		ar[i] = c;

	return (ar);
}
