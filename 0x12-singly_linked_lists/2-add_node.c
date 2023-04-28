#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - prints list.
 * @h: pointer to the first element.
 * Return: number of elements.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	unsigned int len = 0;

	if (new == NULL)
		return (NULL);
	while (str[len])
		len++;
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;
	return (new);
}
