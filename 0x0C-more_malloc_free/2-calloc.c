#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - allocates a memory for an array.
 * @memb: number of elements.
 * @size: the size.
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int memb, unsigned int size)
{
	char *mem;
	unsigned int i;

	mem = malloc((memb * size));
	if (mem == NULL || memb == 0 || size == 0)
		return (NULL);
	for(i = 0; i < memb; i++)
		mem[i] = 0;

	return (mem);
}
