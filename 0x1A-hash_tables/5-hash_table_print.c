#include "hash_tables.h"

/**
 * hash_table_print - print the key value pair of hash table element
 * @ht: the hash table we are print from
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char *comma = "";

	if (ht == NULL || ht->array == NULL)
	{
		return;
	}

	i = 0;
	putchar('{');
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node)
		{
			printf("%s'%s': %s",comma, node->key, node->value);
			comma = ", ";
			node = node->next;
		}
		i++;
	}
	puts("}");
}
