#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_node_end - prints list.
 * @head: pointer to the first element.
 * Return: pointer to the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *curr = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (curr->next)
		curr = curr->next;

	curr->next = new;

	return (new);
}
