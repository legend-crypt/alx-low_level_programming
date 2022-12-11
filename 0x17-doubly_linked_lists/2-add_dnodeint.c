#include "lists.h"

/**
 * add_dnodeint - add node at the beginnig
 * @head: the pointer
 * @n: the int variable
 * Return: the head on success or NULL if failure occurs
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	if (head == NULL)
		return NULL;
	dlistint_t *new_node = (dlistint_t *) malloc(sizeof(dlistint_t));

	new_node->n = n;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->prev = NULL;
	new_node->next = (*head);
	if ((*head) != NULL)
	{
		(*head)->prev = new_node;
	}
	(*head) = new_node;
	return ((*head));
}

