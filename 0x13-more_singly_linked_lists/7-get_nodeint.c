#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: a pointer to the head of the list
 * @index: index of the node, starting at 0
 * Return: NULL if the node does not exist, otherwise the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	current = head;

	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	return (current);
}
