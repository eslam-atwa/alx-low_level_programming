#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * get_nodeint_at_index - gets a node.
 * @head: pointer to the first element.
 * @index: the node to get.
 * Return: The node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i <= index)
	{
		if (index == i)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
