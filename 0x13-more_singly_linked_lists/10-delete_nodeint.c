#include "lists.h"
/**
 * delete_nodeint_at_index- delete node at a given index
 * @head: - head reference
 * @index: - index node to be deleted
 * Return: 1 if successful and -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head, *prev = temp;
	unsigned int i;

	i = 0;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (; temp && i < index; i++)
	{
		prev = temp;
		temp = temp->next;
	}
	if (temp == NULL)
		return (-1);
	prev->next = temp->next;
	free(temp);
	return (1);
}
