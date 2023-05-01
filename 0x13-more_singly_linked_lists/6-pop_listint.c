#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * pop_listint - frees the head.
 * @head: pointer to the first element.
 */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *new_h;

	if (*head == NULL || head == NULL)
		return (0);
	
	new_h = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = new_h;
	return(i);
}
