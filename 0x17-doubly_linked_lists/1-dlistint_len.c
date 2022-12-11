#include "lists.h"

/**
 * dlistint_len - traverse and print a doubly linked list
 * @h: the head node
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
