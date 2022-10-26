#include "lists.h"

/**
 * pop_listint - delete a node
 * @head: the head
 * Return: the head
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;


	if (head == NULL)
	{
		return (0);
	}
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
