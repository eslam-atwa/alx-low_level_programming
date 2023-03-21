#include <stdio.h>

/**
* main - The start and end function prints "a-z"
* Return: 0 in if successful
*/
void print_alphabet(void)
{
	char m = 'a';

	for (m = 97; m <= 'z'; m++)
	{
		if (m == 'q' || m == 'e')
			continue;
		putchar(m);
	}
	putchar('\n');
}
