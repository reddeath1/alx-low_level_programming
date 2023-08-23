#ifndef SHASH_TABLES_H
#define SHASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: The key is unique in the HashTable
 * @value: value corresponding to a key
 * @next: pointer to the next node of the List
 * @sprev: pointer to the previous element of the sorted linked list
 * @snext: pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
	char *key;
	char *value;
	struct shash_node_s *next;
	struct shash_node_s *sprev;
	struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 * @size: size of the array
 * @array: The An array of size
 * @shead: pointer to the first element of the sorted linked list
 * @stail: pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
	unsigned long int size;
	shash_node_t **array;
	shash_node_t *shead;
	shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif /* SHASH_TABLES_H */
