#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint - prints and returns a list of integers.
 * @h: pointer to the first element.
 *
 * Return: number of elements.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int len = 0;

	while (h)
	{
		printf("%d\n", h->n);
		len++;
		h = h->next;
	}
	return (len);
}
