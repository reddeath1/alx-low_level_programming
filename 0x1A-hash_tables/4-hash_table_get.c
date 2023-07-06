#include "hash_tables.h"

/**
 * hash_table_get - The main function that gets key and value froma hash table.
 * @ht: The pointer to hash table to pull value from.
 * @key: A key to get value from hash table.
 * Return: A value associated to key, or NULL if the key was not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	char *val = NULL;
	hash_node_t *node;

	if (!ht || !key)
		return (NULL);
	else if (strlen(key) == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[index] == NULL)
		return (NULL);

	node = ht->array[index];
	while (!val)
	{
		if (strcmp(node->key, key) == 0)
			val = node->value;
		node = node->next;
	}
	return (val);
}
