#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints name.
 * @name: name.
 * @f: pointer to function.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name)
		f(name);
}
