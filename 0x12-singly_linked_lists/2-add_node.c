#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: A pointer to a pointer to the head of the list
 * @str: The string to be added to the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(list_t));

	if (ptr == NULL)
		return (NULL);

	ptr->str = strdup(str);

	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->len = strlen(str);
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
