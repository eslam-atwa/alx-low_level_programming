#include "main.h"

/**
 * puts2 - prints a string.
 *
 * @str: the string.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
		i++;
	}
	_putchar('\n');
}
