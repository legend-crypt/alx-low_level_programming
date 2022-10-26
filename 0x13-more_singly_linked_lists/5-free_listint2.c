#include "lists.h"

/**
 * free_listint2 - free the list
 * @head: the head
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;
	while (head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
