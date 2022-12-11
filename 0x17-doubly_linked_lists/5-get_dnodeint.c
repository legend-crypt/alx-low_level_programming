#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node of a dlistint_t
 * @head: the pointer
 * @index: the given index
 * Return: the node on success and NULL on failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	temp = head;
	i = 0;

	while (index != i)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
