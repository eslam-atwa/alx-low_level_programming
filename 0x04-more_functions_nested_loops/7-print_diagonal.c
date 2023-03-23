#include "main.h"

/**
 * print_diagonal - prints a straight line.
 * followed by a new line
 *
 * @n: repetion
 */
void print_diagonal(int n)
{
	int i = 0;
	while (n > 0)
	{	
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
		n--;
	}
}
