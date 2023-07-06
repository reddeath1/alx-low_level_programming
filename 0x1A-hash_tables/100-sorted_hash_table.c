#include "hash_tables.h"


/**
 * shash_table_create - The main function that creates a hash table.
 * @size: The size of hash table.
 * Return: (The pointer to the new hash table in memory (heap).)
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	shash_table_t *table = NULL;

	table = malloc(sizeof(shash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	for (; x < size; x++)
		(table->array)[x] = NULL;
	return (table);
}

/**
 * shash_table_set - A function that sets a key value pair in the hash table.
 * @ht: The main pointer to hash table to set in.
 * @key: The key to set in hash table.
 * @value: A value to set as hash_node's value.
 * Return: (Always1 on success, or 0 on failure.)
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	char *val = NULL, *ke = NULL;
	shash_node_t *node = NULL, *tmp = NULL;

	if (!ht || !key || !value)
		return (0);
	else if (strlen(key) == 0)
		return (0);
	val = strdup(value);
	ke = strdup(key);
	node = malloc(sizeof(shash_node_t));
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
			tmp = tmp->next;
		}
		tmp = (ht->array)[index];
		node->next = tmp;
		(ht->array)[index] = node;
	}
	else
		(ht->array)[index] = node;
	return (1);
}

/**
 * shash_table_get - The main function that gets key and value froma hash table.
 * @ht: The pointer to hash table to pull value from.
 * @key: A key to get value from hash table.
 * Return: (The value associated to key, or NULL if key was not found.)
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	char *val = NULL;
	shash_node_t *node;

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
			value = node->value;
		node = node->next;
	}
	return (val);
}

/**
 * shash_table_print - The main prints the contents of a hash table
 * @ht: The hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int v = 0, pos = 0;
	shash_node_t *node = NULL;

	if (ht == NULL)
		return;
	putchar('{');
	if (ht)
	{
		for (; v < ht->size - 1; v++)
		{
			if (ht->array[v] != NULL)
				pos = v;
		}

		for (v = 0; v <= pos; v++)
		{
			node = ht->array[i];
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (i < pos - 1)
					printf(", ");
			}

		}
	}
	printf("}\n");
}

/**
 * shash_table_delete - The main function that frees a hash table.
 * @ht: A Pointer to hash table to delete.
 *Return: Nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int x = 0;
	shash_node_t *next = NULL, *node = NULL;

	if (!ht)
		return;

	if (ht->array)
	{
		for (; x < ht->size; x++)
		{
			if (ht->array[x] != NULL)
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
