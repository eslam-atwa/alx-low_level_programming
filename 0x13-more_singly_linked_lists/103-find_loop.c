#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * find_listint_loop - finds a loop
 * @head: pointer to the first element.
 * Return: place of loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	if (head == NULL)
		return (NULL);

	while (slow != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			slow = head;

			return (fast);
		}
	}

	return (NULL);
}
