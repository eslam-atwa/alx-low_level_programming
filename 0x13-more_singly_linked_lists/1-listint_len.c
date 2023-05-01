#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * listint_len - returns a list of integers.
 * @h: pointer to the first element.
 *
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
