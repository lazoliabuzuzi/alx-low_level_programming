#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t
 * linked list
 * @head: pointer to the head of the list
 * @index: the index of the node, starting from 0
 * Return: the nth node of a dlistint_t linked list or NULL if
 * the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int counter = 0;

	while (curr != NULL)
	{
		if (counter == index)
			return (curr);

		curr = curr->next;
		counter++;
	}

	return (NULL);
}
