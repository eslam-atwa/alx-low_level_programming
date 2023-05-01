#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * delete_nodeint_at_index - deletes  a node.
 * @head: pointer to the first element.
 * @index: the node to delete.
 * Return: The node.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *move = *head;
	listint_t *curr = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(move);
		return (1);
	}

	while (i < index - 1)
	{
		if (!move || !(move->next))
			return (-1);
		move = move->next;
		i++;
	}
	curr = move->next;
	move->next = curr->next;
	free(curr);

	return (1);
}
