#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a
 * dlistint_t list
 * @head: double pointer to the head of a list
 * @n: number to be assigned to the new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (*head != NULL)
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	else
	{
		new_node->next = NULL;
	}

	*head = new_node;

	return (new_node);
}
