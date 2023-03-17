#include <stdio.h>

/**
* main - The start and end function prints "a-z"
* Return: 0 in if successful
*/
int main(void)
{
	char m;

	for (m = 'z'; m >= 'a'; m--)
		putchar(m);
	putchar('\n');
	return (0);
}
