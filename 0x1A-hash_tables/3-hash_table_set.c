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

	strcpy(new_node->value, value);
	strcpy(new_node->key, key);
	new_node->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}

	temp = ht->array[index];
	while (temp->next != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			strcpy(new_node->value, value);
			free(new_node);
			break;
		}
		temp = temp->next;
	}
	new_node->next = temp;
	temp = new_node;
	return (1);
}
