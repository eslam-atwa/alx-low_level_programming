#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint - adds a node to the linked list.
 * @head: pointer to the first element.
 * @n: value for the integer
 *
 * Return: number of elements.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_one = malloc(sizeof(listint_t));
		if (new_one == NULL)
			return (NULL);
	new_one->n = n;
	new_one->next = *head;
	*head = new_one;

	return (new_one);
}
