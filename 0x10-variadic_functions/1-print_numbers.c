#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers.
 * @separator: seprator.
 * @n: number of elements.
 */
void print_numbers(const char *separator, const unsigned int n, ...);
int main(void)
{
    print_numbers(", ", 6, 0, 98,NULL, -1024, 402, 4);
    return (0);
}
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *x = separator;
	va_list m;
	va_start (m, n);
	for (i = 0; i < n; i++)
	{
		x = (i < (n - 1)? separator : NULL);
		printf("%d", va_arg(m, int));
		if (x != NULL)
		printf("%s", x);
	}
	printf("\n");
}
