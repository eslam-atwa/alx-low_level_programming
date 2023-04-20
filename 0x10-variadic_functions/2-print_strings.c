#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings.
 * @separator: seprator.
 * @n: number of elements.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *x = separator;
	char *str;
	va_list m;

	va_start(m, n);
	for (i = 0; i < n; i++)
	{
		x = (i < (n - 1)) ? x : NULL;
		str = va_arg(m, char *);
		printf("%s", (str != NULL) ? str : "(nil)");
		if (x != NULL)
			printf("%s", x);
	}
	va_end(m);
	printf("\n");
}
