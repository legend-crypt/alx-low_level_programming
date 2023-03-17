#include "lists.h"

/**
 * delete_dnodeint_at_index - delete a node at a given index
 * @head: the head node;
 * @indext: the index where we are deleting
 * Return: 1 on success and -1 when failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int idx = 0;
	dlistint_t *temp;
	
	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		(*head)->prev = NULL;
		if (*head == NULL)
		{
			return (-1);
		}
		free(temp);
		return (1);
	}
	temp = *head;
	while(temp)
	{
		if (idx == index)
		{
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		if (temp->next == NULL && idx == index)
		{
			temp->prev->next = NULL;
			free(temp);
			return (-1);
		}
		idx++;
		temp = temp->next;
	}
	return (-1);
}
