#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9.
 * followed by a new line
 */
void print_numbers(void)
{
	int i;
	char m;

	i = 0;
	m = '0';

	while (i < 10)
	{
		_putchar(m);
		i++;
		m++;
	}
		_putchar('\n');
}
