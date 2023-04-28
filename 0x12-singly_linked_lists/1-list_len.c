#include <stdlib.h>
#include "lists.h"
/**
 * list_len - gives num of elemnts.
 * @h: pointer to head
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int s = 0;

	while (h)
	{
		s++;
		h = h->next;
	}
	return (s);
}
