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
	const listint_t *fast = head;
	const listint_t *slow = head;
	size_t len = 0;
	size_t placer;

	while (fast != NULL)
	{
		printf("[%p] %d\n", (void *)fast, fast->n);
		len++;
		fast = fast->next;
		slow = head;
		placer = 0;
		while (placer < len)
		{
			placer++;
			if (fast == slow)
			{
				printf("-> [%p] %d\n", (void *)fast, fast->n);
				return (len);
			}
			slow = slow->next;
		}
		if (head == NULL)
			exit(98);
	}
	return (len);
}
