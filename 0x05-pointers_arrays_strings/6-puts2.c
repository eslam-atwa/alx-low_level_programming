#include "main.h"

/**
 * puts2 - prints a string.
 *
 * @str: the string.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
