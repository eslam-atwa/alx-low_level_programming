#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - excutes on every element of the array.
 * @array: pointer to array.
 * @size: the size.
 * @action: pointer to function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (!array || !action)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
