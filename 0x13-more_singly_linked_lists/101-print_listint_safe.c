#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list and exits on failure.
 * @head: A pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t node_count = 0;
    const listint_t *tortoise = head;
    const listint_t *hare = head;

    while (hare != NULL && hare->next != NULL)
    {
        printf("[%p] %d\n", (void *)tortoise, tortoise->n);
        node_count++;
        tortoise = tortoise->next;
        hare = hare->next->next;

        if (tortoise == hare)
        {
            printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
            exit(98);
        }
    }

    if (hare != NULL)
    {
        printf("[%p] %d\n", (void *)tortoise, tortoise->n);
        node_count++;
    }

    return node_count;
}

