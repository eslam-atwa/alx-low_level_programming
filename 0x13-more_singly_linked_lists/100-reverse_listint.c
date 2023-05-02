#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * reverse_listint - reverses a list of integers.
 * @head: pointer to the first element.
 * Return: pointer to the first node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = *head;

	while (*head)
	{
		curr = (**head).next;
		(**head).next = prev;
		prev = *head;
		*head = curr;
	}
	*head = prev;

	return (*head);
}
