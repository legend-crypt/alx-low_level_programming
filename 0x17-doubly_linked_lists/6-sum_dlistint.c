#include "lists.h"

/**
 * sum_dlistint - sum the data of a linked list
 * @head: the head of the node
 * Return: 0 is list is empty, on success return sum
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	temp = head;
	sum = 0;
	if (head == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
