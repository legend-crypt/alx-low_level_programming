#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: the head pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while(temp)
	{
		temp = temp->next;
		free(temp);
	}
}
