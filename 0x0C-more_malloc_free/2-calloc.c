#include <stdlib.h>
#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i;

        for (i = 0; i < n; i++)
        {
                s[i] = b;
        }

        return (s);
}

/**
 * *calloc - craete array memory.
 * @nmemb: number of elements.
 * @size: size.
 * Return: pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ar;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ar = malloc((size * nmemb));

	if (ar == NULL)
		return (NULL);
	_memset(ar, 0, (size * nmemb));
	
	return (ar);
}
