#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_listint - sums and returns a list of integers.
 * @head: pointer to the first element.
 * Return: the sum of elements.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum = (sum + head->n);
		if (head->next == NULL)
			return (sum);
		head = head->next;
	}

	return (0);
}
