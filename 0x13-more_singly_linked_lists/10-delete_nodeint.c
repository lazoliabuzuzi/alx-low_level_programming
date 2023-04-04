#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index index of a
 * listint_t linked list
 * @head: a pointer to the head of the list
 * @index: the index of the node that should be deleted. Index
 * starts at 0.
 * Return: 1 if success, -1 if fail.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev;
	listint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	if (prev == NULL)
		*head = current->next;
	else
		prev->next = current->next;

	free(current);
	return (1);
}
