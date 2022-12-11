#include "lists.h"

/**
 * free_dlistint - free a linked list
 * @head: the pointer
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr;

	curr = head;

	while (curr != NULL)
	{
		free(curr);
		curr = curr->next;
	}
	head = NULL;
}
