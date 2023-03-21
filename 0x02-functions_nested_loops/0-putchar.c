#include "main.h"
/**
 * main - evaluates an integer
 * Return: zero if excuted properly
 */
int main(void)
{
	int i = 0;
	char pu[9] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};

	while (i <= 8)
		{
		_putchar(pu[i]);
		i++;
		}
	return (0);
}
