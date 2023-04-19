#include <stdlib>
#include "3-calc.h"

/**
 * op_add: adds integers.
 * @a: a.
 * @b: b.
 * Retrun: result.
 */
int op_add(int a, int b)
{
	return ((a + b));
}

/**
 * op_sub: substracts integers.
 * @a: a.
 * @b: b.
 * Retrun: result.
 */
int op_sub(int a, int b)
{
	return ((a - b));
}

/**
 * op_mul: multiplies integers.
 * @a: a.
 * @b: b.
 * Retrun: result.
 */
int op_mul(int a, int b)
{
	return ((a * b));
}

/**
 * op_div: divides integers.
 * @a: a.
 * @b: b.
 * Retrun: result.
 */
int op_div(int a, int b)
{
	return ((a / b));
}

/**
 * op_mod: mod integers.
 * @a: a.
 * @b: b.
 * Retrun: result.
 */

int op_mod(int a, int b)
{
	return ((a % b));
}
