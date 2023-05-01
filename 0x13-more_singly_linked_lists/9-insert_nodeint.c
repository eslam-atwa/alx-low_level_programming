#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * insert_nodeint_at_index - inserts a node.
 * @head: pointer to the first element.
 * @idx: the node to insert.
 * @n: the integer to be added.
 * Return: The node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *elem = malloc(sizeof(listint_t));
	listint_t *move = *head;

	elem->n = n;
	elem->next = NULL;

	if (*head == NULL || elem == NULL)
		return (0);
	if (idx == 0)
	{
		elem->next = *head;
		*head = elem;
		return (elem);
	}
	while (*head && i <= idx)
	{
		if (i == (idx - 1))
		{
			elem->next = move->next;
			move->next = elem;
			return (elem);
		}
		i++;
		move = move->next;
	}
	return (NULL);
}
