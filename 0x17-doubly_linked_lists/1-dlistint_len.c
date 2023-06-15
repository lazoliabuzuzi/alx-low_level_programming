#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked
 * dlistint_t list
 * @h: pointer to the head of a linked list
 * Return: the number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t counter = 0;

	while (curr != NULL)
	{
		counter++;

		curr = curr->next;
	}

	return (counter);
}
