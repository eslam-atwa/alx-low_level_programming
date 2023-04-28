#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds node.
 * @head: first element.
 * @str: string literal.
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
