#include "hash_tables.h"

/**
 * hash_table_print - The Main function that prints the contents of a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x = 0, position = 0;
	hash_node_t *node = NULL;

	if (ht == NULL)
		return;
	putchar('{');
	if (ht)
	{
		for (; x < ht->size - 1; x++)
		{
			if (ht->array[x] != NULL)
				position = x;
		}

		for (x = 0; x <= position; x++)
		{
			node = ht->array[x];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (i < position - 1)
					printf(", ");
			}

		}
	}
	printf("}\n");
}
