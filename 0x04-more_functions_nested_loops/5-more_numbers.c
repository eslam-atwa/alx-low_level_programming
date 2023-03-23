#include "main.h"

/**
 * more_numbers - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void more_numbers(void)
{
	char num[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '1',
	'0', '1', '1', '1', '2', '1', '3', '1', '4'};
	int i;
	int n = 10;

	
	while (n--)
	{
	i = 0;
		while (i < 20)
		{
			_putchar(num[i]);
			i++;
		}
		_putchar('\n');
	}
}
