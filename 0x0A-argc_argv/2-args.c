#include <stdio.h>
#include "main.h"
/**
 * main - prints the name of the program and its arguments.
 * Return: returns 0 if excuted properly.
 * @argc: the argument count.
 * @argv: the argument vector.
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (argc)
	{
		printf("%s\n", argv[i++]);
		argc--;
	}
	return (0);
}
