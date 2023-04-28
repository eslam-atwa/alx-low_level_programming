#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints list.
 * @h: pointer to the first element.
 * Return: number of elements.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *curr;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = str;
	new->next = NULL;
	for(curr = *head; curr->next; curr = curr->next)
	{
	}
	curr->next = new;

	return (new);
}
