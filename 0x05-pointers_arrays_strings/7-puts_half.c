#include "main.h"

/**
 * puts_half - prints a string.
 *
 * @str: the string.
 */
void puts_half(char *str)
{
	int i = 0;
	int m;

	while (str[i])
	{
		i++;
	}
	if ( i % 2 == 0)
	{
		m = i/2;
		while(str[m])
		{
			_putchar(str[m]);
			m++;
		}
	}
	else
	{
		_putchar(str[i-1]);
	}
	_putchar('\n');
}
