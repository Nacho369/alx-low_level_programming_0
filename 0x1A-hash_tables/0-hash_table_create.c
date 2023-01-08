#include "hash_tables.h"

/**
 * hash_table_t - Creates a hash table
 *
 * @size: Size of the array
 *
 * Return: A pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t = malloc(sizeof(hash_table_t));
	hash_node_t **arr = malloc(sizeof(hash_node_t *) * size);
	size_t i;

	if (hash_t == NULL)
		return NULL;

	if (arr == NULL)
		return NULL;

	hash_t->size = size;
	hash_t->array = arr;

	for (i = 0; i < size; i++)
		hash_t->array[i] = NULL;

	return (hash_t);
}
