#include "lists.h"

/**
 * list_len - return number of element in a node
 * @h: traverser
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	int count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
