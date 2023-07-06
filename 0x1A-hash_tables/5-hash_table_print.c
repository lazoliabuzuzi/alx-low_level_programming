#include <stdio.h>
#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table
 * Return: If ht is NULL, don’t print anything
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int first_value_pair = 1;
	hash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (!first_value_pair)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			first_value_pair = 0;
			current = current->next;
		}
	}
	printf("}\n");
}
