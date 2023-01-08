#include "hash_tables.h"


/**
 * hash_table_set - Adds element to the hash table
 *
 * @ht: Hash table to add or update the key/value to
 * @key: The key of the hash table.
 * @value: Value associated with the key.
 *
 * Description: In case of collision, add the new node at the
 * beginning of the list
 *
 * Return: 1 if succeed, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *arr_hash;
	unsigned long int index, i;
	char *value_cpy = strdup(value);

	if (ht == NULL || key == NULL || *key == '\0' ||
		value == NULL)
		return (0);

	if (value_cpy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_cpy;
			return (1);
		}
	}

	arr_hash = malloc(sizeof(hash_node_t));
	if (arr_hash == NULL)
	{
		free(value_cpy);
		return (0);
	}
	arr_hash->key = strdup(key);
	if (arr_hash->key == NULL)
	{
		free(arr_hash);
		return (0);
	}
	arr_hash->value = value_cpy;
	arr_hash->next = ht->array[index];
	ht->array[index] = arr_hash;

	return (1);
}
