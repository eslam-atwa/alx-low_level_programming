#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints all.
 * @format: format.
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0, len = 0, check;
	char *str;
	va_list m;

	va_start(m, format);
	while (format[len])
		len++;
	while (i < len)
	{
		check = 0;
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(m, int));
			break;
			case 'i':
			 printf("%d", va_arg(m, int));
			break;
			case 's':
			str = va_arg(m, char *);
			printf("%s", (str != NULL) ? str : "(nil)");
			break;
			case 'f':
			printf("%f", va_arg(m, double));
			break;
			default:
			check = 1;
			break;
		}
		i++;
		if (i < (len) && check == 0)
			printf(", ");
	}
	va_end(m);
	printf("\n");
}
