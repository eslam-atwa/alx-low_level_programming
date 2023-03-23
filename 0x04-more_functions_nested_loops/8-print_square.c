#include "main.h"

/**
 * print_square - prints a straight line.
 * followed by a new line
 *
 * @size: repetion
 */
void print_square(int size)
{
	int i = size;
	int b = size;

	if (size <= 0)
		_putchar('\n');
	while (size > 0)
	{
		while (i > 0)
		{
			_putchar('#');
			i--;
		}
		i = b;
		size--;
		_putchar('\n');
	}
}
