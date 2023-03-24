#include "main.h"

/**
 * print_diagonal - prints a straight line.
 * followed by a new line
 *
 * @n: repetion
 */
void print_diagonal(int n)
{
	int g;
	int i = n;

	if (n <= 0)
		_putchar('\n');
	while (n > 0)
	{
		g = i;
		while (g > 0)
		{
			_putchar(' ');
			g--;
		}
		_putchar('\\');
		_putchar('\n');
		n--;
		++i;
	}
}
