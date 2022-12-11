#include "lists.h"

/**
 * add_dnodeint - add node at the beginnig
 * @head: the pointer
 * @n: the int variable
 * Return: the head on success or NULL if failure occurs
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	dlistint_t *temp_node;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	temp_node = *head;
	*head = new_node;
	new_node->next = temp_node;
	if (temp_node != NULL)
	{
		temp_node->prev = new_node;
	}
	return (*head);
}

