#include "hash_tables.h"

/**
 * hash_table_set - The main function that sets a key value pair in the hash table.
 * @ht: The pointer to hash table to set in.
 * @key: key to set in hash table.
 * @value: A value to set as hash_node's value.
 * Return: (Always)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *val = NULL, *ke = NULL;
	hash_node_t *node = NULL, *tmp = NULL;

	if (!ht || !key || !value)
		return (0);
	else if (strlen(key) == 0)
		return (0);
	val = strdup(value);
	ke = strdup(key);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = ke;
	node->value = val;
	node->next = NULL;
	index = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[index] != NULL)
	{
		tmp = (ht->array)[index];
		while (tmp)
		{
			if (strcmp(tmp->key, ke) == 0)
			{
				free(ht->array[index]->value);
				ht->array[index]->value = val;
				free(ke);
				free(node);
				return (1);
			}
			tmp_node = tmp->next;
		}
		tmp = (ht->array)[index];
		node->next = tmp;
		(ht->array)[index] = node;
	}
	else
		(ht->array)[index] = node;
	return (1);
}
