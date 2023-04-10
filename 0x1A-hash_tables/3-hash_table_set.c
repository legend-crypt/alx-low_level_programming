#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht:  the hash table we adding the elememt to
 * @key: the key of the element
 * @value: the value of the element
 * Return: 1 if successful 0 if fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL)
	{
		return (0);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		if (strcmp(temp->key, key) == 0)
		{
			strcpy(ht->array[index]->value, new_node->value);
		}
		else
		{
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
		}
	}
	return (1);
}
