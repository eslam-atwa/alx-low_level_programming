#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - prints the argument count.
 * Return: returns 0 if excuted properly.
 * @argc: the argument count.
 * @argv: the argument vector.
 */
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
		return (0);
	}
	else
	{
	printf("Error\n");
	return (1);
	}
}
