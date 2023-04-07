#include "hash_tables.h"

/**
 * key_index - returns the index at which the key is the table
 * @key: where the key is
 * @size: the size of the hash table arry
 * Return: the key of where hash table is to be storee
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_key = hash_djb2(key);

	return (hash_key % size);
}
