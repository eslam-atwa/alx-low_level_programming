#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_listint_safe - prints and returns a list of integers.
 * @head: pointer to the first element.
 * Return: number of elements.
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int len = 0;
	const listint_t *slow = head;
	const listint_t *fast = head;

	while (fast && slow != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		len++;
		fast = fast->next->next;
		slow = slow->next;
		if (fast == slow)
		{
			printf("-> [%p] %d\n", (void *)&len, len);
			return (len);
		}
	}
	if (head == NULL)
	exit(98);

	return (len);
}
