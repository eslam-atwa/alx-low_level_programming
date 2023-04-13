#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers.
 * @min: least signeficant.
 * @max: most signeficant.
 * Return: pointer to the allocated memory
 */
int *array_range(int min, int max)
{
	int *mem;
	int size = (max - min), i = 1, n = min;

	if (size < 0)
		return (NULL);
	mem = malloc((sizeof(int) * (size + 1)));
	if (mem == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		mem[i] = n;
		n++;
	}

	return (mem);
}
