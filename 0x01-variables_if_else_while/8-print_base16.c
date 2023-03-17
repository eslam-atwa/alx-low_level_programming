#include <stdio.h>

/**
* main - The start and end function prints "a-z"
* Return: 0 in if successful
*/
int main(void)
{
	char m;
	char s;

	for (m = '0'; m <= '9'; m++)
		putchar(m);
	for (s = 'a'; s <= 'f'; s++)
		putchar(s);
	putchar('\n');
	return (0);
}
