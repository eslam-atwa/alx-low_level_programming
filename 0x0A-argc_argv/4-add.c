#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints the argument count.
 * Return: returns 0 if excuted properly.
 * @argc: the argument count.
 * @argv: the argument vector.
 */
int main(int argc, char **argv)
{
	int i = 1;
	int sum = 0;
	int n, m, s;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else if (argc > 1)
		while (i < argc)
		{
			n = (atoi(argv[i]));
			s = *argv[i];
			m = isdigit(s);
			if (m == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += n;
				i++;
			}
		}
	printf("%d\n", sum);
	return (0);
}
