#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: pointer to array.
 * @size: the size.
 * @cmp: pointer to function.
 * Return: -1 if unsuccessful.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, c;

	while (size > 0 && i < size && cmp != NULL && array)
	{
		c = cmp(array[i]);
		if (c)
			return (i);
		i++;
	}

	return (-1);
}
