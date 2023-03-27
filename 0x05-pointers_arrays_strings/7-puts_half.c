#include "main.h"

/**
 * puts_half - prints a string.
 *
 * @str: the string.
 */
void puts_half(char *str)
{
	int len = 0;
	int m;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		for (m = (len / 2); m < len; m++)
		{
			_putchar(str[m]);
		}
	}
	else
	{
		for (m = (len + 1) / 2; m < len; m++)
		{
			_putchar(str[m]);
		}
	}
	_putchar('\n');

}
