#include <stdlib.h>
/**
 * void *malloc_cheked - allocates memory.
 * @b: size.
 */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
