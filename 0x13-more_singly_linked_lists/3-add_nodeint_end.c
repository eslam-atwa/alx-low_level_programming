#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint_end - adds a node to the linked list.
 * @head: pointer to the first element.
 * @n: value for the integer
 *
 * Return: adress of new.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last = *head;
	listint_t *new_one = malloc(sizeof(listint_t));

	if (new_one == NULL)
		return (NULL);
	new_one->n = n;
	new_one->next = NULL;
	if (*head == NULL)
	{
		*head = new_one;
		return (NULL);
	}
	while (last->next)
		last = last->next;
	last->next = new_one;

	return (new_one);
}
