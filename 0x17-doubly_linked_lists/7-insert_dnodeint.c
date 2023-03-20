#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at index
 * @h: head of node
 * @idx: index to insert node
 * @n: data for new node
 * Return: list with inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 1;
	dlistint_t *temp = NULL, *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*h == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	new->n = n;
	temp = *h;
	while (temp->next != NULL)
	{
		if (count == idx) /* found back */
		{
			new->prev = temp; /* current prev to back link */
			new->next = temp->next; /* current next to front link*/
			temp->next = new; /* back next link */
			new->next->prev = new; /* from prev link */
		}
		temp = temp->next;
		count++;
	}
	if (count == idx) /* end of DLL */
	{
		new->prev = temp; /* current prev to back link */
		new->next = NULL; /* current next to NULL*/
		temp->next = new; /* back next link */
	}
	if (count < idx)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
