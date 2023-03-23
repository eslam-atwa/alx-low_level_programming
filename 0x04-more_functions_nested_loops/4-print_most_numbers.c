#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9.
 * followed by a new line
 */
void print_most_numbers(void)
{
	int i;
	char m;

	i = 0;
	m = '/';

	while (i < 10)
	{
		i++;
		++m;	
		if (m == '2' || m == '4')
			continue;
		_putchar(m);
	}
		_putchar('\n');
}
