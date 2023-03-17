#include <stdio.h>

/**
* main - The start and end function prints "a-z, A-Z"
* Return: 0 in if successful
*/
int main(void)
{
	char m = 'a';
	char f = 'A';

	for (m = 97; m <= 'z'; m++)
		putchar(m);
	for (f = 'A'; f <= 'Z' ; f++)
		putchar(f);
	putchar('\n');
	return (0);
}
