#include "main.h"

/**
 * _puts - prints a string.
 *
 * @str: the string.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
		_putchar(str[i]);
	}
	_putchar('\n');
}
