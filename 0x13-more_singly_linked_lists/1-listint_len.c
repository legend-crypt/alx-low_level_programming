#include "lists.h"

/**
 * listint_len - print all the element in list
 * @h: the head
 * Return: the number of list element
 */

size_t listint_len(const listint_t *h)
{
	int len;

	len = 0;

	if (h == NULL)
	{
		h = NULL;
	}

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
