#include "lists.h"

/**
 * print_dlistint - traverse and print a doubly linked list
 * @h: the head node
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
