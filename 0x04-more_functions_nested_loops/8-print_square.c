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

	while (size > 0)
	{
		while (i > 0)
		{
			_putchar('#');
			i--;
		}
		_putchar('\n');
		i = b;
		size--;
	}
}
