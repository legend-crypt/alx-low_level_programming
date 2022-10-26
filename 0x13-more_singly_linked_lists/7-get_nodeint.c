#include "lists.h"

/**
 * get_nodeint_at_index - get node data by its index
 * @head: the head
 * @index: the index of the node
 * Return: the a node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr = head;

	i = 0;
	if (head == NULL)
	{
		return (NULL);
	}
	while (ptr && i < index)
	{
		ptr = ptr->next;
		i++;
	}
	if (i == index)
	{
		return (ptr);
	}
	else
	{
		return (NULL);
	}

}
