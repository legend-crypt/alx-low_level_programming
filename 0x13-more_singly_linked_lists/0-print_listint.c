#include "lists.h"

/**
 * print_listint - print all the element in list
 * @h: the head
 * Return: the number of list element
 */

size_t print_listint(const listint_t *h)
{
	int len;

	len = 0;

	if (h == NULL)
	{
		h = NULL;
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
