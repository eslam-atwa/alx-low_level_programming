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
        const listint_t *mover = head;
        const listint_t *first = head;
        size_t len = 0;
        size_t new_n;

        while (mover)
        {
                printf("[%p] %d\n", (void *)mover, mover->n);
                len++;
                mover = mover->next;
                new_n = 0;
                while (new_n < len)
                {
                        if (mover == first)
                        {
                                return (len);
                        }
                        first = first->next;
                        new_n++;
                }
                if (!head)
                        exit(98);
        }
        return (len);
}
