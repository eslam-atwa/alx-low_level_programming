#include "main.h"

/**
 * print_rev - prints a string in reverse.
 *
 * @s: the string.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i+2)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
