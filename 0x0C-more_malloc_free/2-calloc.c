#include <stdlib.h>
#include "main.h"

/**
 * *calloc - craete array memory.
 * @nmemb: number of elements.
 * @size: size.
 * Return: pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc((size * nmemb));

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ar[i] = 0;
	}

	return (ar);
}
