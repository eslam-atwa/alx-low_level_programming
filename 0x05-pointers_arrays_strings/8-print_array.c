#include "main.h"
#include <stdio.h>

/**
 * print_array - prints arrays.
 * @a: printer to array.
 * @n: number of elements.
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);
		if ((m + 1) < n)
			printf(", ");
	}
	printf("\n");
}
