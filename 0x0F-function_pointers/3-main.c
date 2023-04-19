#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program 
 * @argc: numbeer
 * @argv: argument type.
 * Return: 0 if succesful.
 * 
 */
int main(int argc, char *argv[])
{
	int ar1, ar2, result;
	char m;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ar1 = atoi(argv[1]);
	ar2 = atoi(argv[3]);
	func = get_op_func(argv[2]);

	if (func != 0)
	{
		printf("Error\n");
		exit(99);
	}
	m = *argv[2];

	if ((m == '/' || m == '%') && ar2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(ar1, ar2);
	printf("%d\n", result);

	return (0);
}
