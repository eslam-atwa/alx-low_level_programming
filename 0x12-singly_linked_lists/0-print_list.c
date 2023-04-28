#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints list.
 * @h: pointer to the first element.
 * Return: number of elements.
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	for(h = h; h != NULL; h = h->next)
	{
		if (!h->str)
		printf("[0] (nil)\n");
		else
		printf("[%u] %s\n", h->len, h->str);
		s++;
	}
	
	return (s);
}
