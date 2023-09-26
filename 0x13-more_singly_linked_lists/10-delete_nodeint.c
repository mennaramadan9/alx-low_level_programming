#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index
 * @head: Pointer to a pointer to the head of the list.
 * @index: The index of the node to be deleted (starting at 0).
 * Return: 1 if the node was successfully deleted, or -1 if it fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}
	while (current != NULL)
	{
		if (count == index - 1)
		{
			temp = current->next;
			if (temp == NULL)
				return (-1);
			current->next = temp->next;
			free(temp);
			return (1);
		}
		current = current->next;
		count++;
	}
	return (-1);
}
