#include "hash_tables.h"

/**
 * hash_table_delete - The main function that frees a hash table.
 * @ht: A pointer to hash table to delete.
 *Return: (Always).
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x = 0;
	hash_node_t *next = NULL, *node = NULL;

	if (!ht)
		return;

	if (ht->array)
	{
		for (; x < ht->size; x++)
		{
			if (ht->array[x])
			{
				node = ht->array[x];
				while (node)
				{
					next = node->next;
					if (node->value)
						free(node->value);
					if (node->key)
						free(node->key);
					free(node);
					node = next;
				}
			}
		}
		free(ht->array);
	}
	free(ht);
}
