#include "main.h"

/**
 * _isdigit - checks a char.
 * @c: first operand.
 *
 * Return: 1 if uppercase 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
