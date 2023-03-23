#include "main.h"

/**
 * print_line - prints a straight line.
 * followed by a new line
 *
 * @n: repetion
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		--n;
	}
	_putchar('\n');
}
