#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at a given index
 * @h: the head node
 * @idx: the index location
 * @n: the data
 * Return: New node on success and Null on Failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *new_node;
	unsigned int i;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	temp = *h;
	i = 0;
	if (new_node == NULL || *h == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	while (i != idx)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
		i++;
	}
	new_node->next = temp;
	new_node->prev = temp->prev;
	new_node->next->prev = new_node;
	return (new_node);

}
