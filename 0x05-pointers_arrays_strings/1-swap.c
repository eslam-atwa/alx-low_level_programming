#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 *
 * @a: first operand.
 * @b: second operand.
 */
void swap_int(int *a, int *b)
{
	int m = *a;
	*a = *b;
	*b = m;
}
