#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of a list
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @n: number to be inserted in list
 * Return: the address of the new node, or NULL if it failed, NULL
 * if it is not possible to add the new node at index idx
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *curr = *h;
	unsigned int i;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;

		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
	}
	else
	{
		i = 0;
		while (curr != NULL && i < idx - 1)
		{
			curr = curr->next;
			i++;
		}

		if (curr == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->next = curr->next;
		new_node->prev = curr;

		if (curr->next != NULL)
			curr->next->prev = new_node;
		curr->next = new_node;
	}
	return (new_node);
}
