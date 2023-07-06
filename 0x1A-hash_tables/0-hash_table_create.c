#include "hash_tables.h"

/**
 * hash_table_create - A main function that creates a hash table.
 * @size: Size of hash table.
 * Return: The pointer to the new hash table in memory (heap).
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table = NULL;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	for (; i < size; i++)
		(table->array)[i] = NULL;
	return (table);
}
