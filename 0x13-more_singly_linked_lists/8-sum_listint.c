#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n).
 * @head: A pointer to the head of the list.
 *
 * Return: The sum of all the data (n) in the list. If empty, return 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

