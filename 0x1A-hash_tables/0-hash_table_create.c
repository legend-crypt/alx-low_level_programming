#include "hash_tables.h"

/**
 * hash_table_create - create a hash table
 * @size: the size of the hash table
 * Return: the a pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));

	table->size = size;
	table->array = (hash_node_t **) calloc(table->size, sizeof(hash_node_t *));

	if (table == NULL)
	{
		free(table);
		return (NULL);
	}
	if (table->array == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}
	return (table);


}
