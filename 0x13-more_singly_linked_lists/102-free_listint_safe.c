#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint_safe - frees and returns a list of integers.
 * @h: pointer to the first element.
 * Return: number of elements.
 */
size_t free_listint_safe(listint_t **h)
{
	unsigned int len = 0;
	listint_t *slow = *h;
	listint_t *fast = *h;
	listint_t *temp = *h;

	while (fast && slow != NULL && fast->next != NULL)
	{
		temp = temp->next;
		free(*h);
		*h = temp;
		len++;
		fast = fast->next;
		slow = slow->next;
		if (fast == slow)
		{
			return (len);
		}
	}
	return (len);

}
