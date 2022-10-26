#include "lists.h"

/**
 * free_listint - free the list
 * @head: the head
 */

void free_listint(listint_t *head)
{
	listint_t *temp;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
