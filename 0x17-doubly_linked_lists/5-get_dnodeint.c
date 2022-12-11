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
	unsigned int count_index;
	unsigned int i;

	temp = head;
	count_index = dlistint_len(head);
	i = 0;

	if (index > count_index)
	{
		return (NULL);
	}
	while (index != i)
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}
