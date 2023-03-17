#include <stdio.h>

/**
* main - The start and end function prints "a-z"
* Return: 0 in if successful
*/
int main(void)
{
	int m;

	for (m = '0'; m <= '9'; m++)
	{
		putchar(m);
		if (m == '9')
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
