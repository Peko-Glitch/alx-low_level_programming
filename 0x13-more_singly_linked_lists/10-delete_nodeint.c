#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at the specified index.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to be deleted (starting at 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;
	for (i = 0; i < index - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	if (current == NULL || current->next == NULL)
		return (-1); /* if Index is  out of range */

	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}

