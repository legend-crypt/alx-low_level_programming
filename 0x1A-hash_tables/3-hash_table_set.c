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
	hash_node_t *new_node = (hash_node_t *) malloc(sizeof(hash_node_t));
	hash_node_t *temp;
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	if (ht == NULL || key == NULL || new_node == NULL)
	{
		return (0);
	}

	if (ht->array[index] == NULL)
	{
		strcpy(new_node->value, value);
		strcpy(new_node->key, key);
		new_node->next = NULL;
		ht->array[index] = new_node;
		return (1);
	}
	if (ht->array[index] != NULL)
	{
		temp = ht->array[index];
		while(temp != NULL)
		{
			temp = temp->next;
		}
		strcpy(new_node->value, value);
		strcpy(new_node->key, key);
		temp->next = new_node;
		new_node->next = NULL;
		return (1);
	}
	return (1);
}
