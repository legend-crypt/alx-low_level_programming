#include "hash_tables.h"

/**
 * hash_table_get - get the value of a hash item associated with the key
 * @ht: the hash table we are getting the item from
 * @key: the key to be search
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *get_item;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *) key, ht->size);

	get_item = ht->array[index];

	if (get_item == NULL)
		return (NULL);
	return (get_item->value);
}
