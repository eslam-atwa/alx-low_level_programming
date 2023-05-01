#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint - frees linked list.
 * @head: pointer to the first element.
 */
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
