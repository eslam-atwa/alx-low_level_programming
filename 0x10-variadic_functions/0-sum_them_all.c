#include <stdarg.h>
/**
 * sum_them_all - sums them all.
 * @n: number of arguments.
 * Return: result.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x = 0;
	va_list m;

	va_start(m, n);

	for (i = 0; i < n; i++)
	{
		x = x + va_arg(m, int);
	}
	return (x);
}
