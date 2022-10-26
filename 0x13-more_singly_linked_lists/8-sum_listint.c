#include "lists.h"

/**
 * sum_listint - sum up the node data
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *ptr = head;

	sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
