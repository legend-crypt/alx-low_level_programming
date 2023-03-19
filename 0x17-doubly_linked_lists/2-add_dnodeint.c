# include "lists.h"

/**
 * add_dnodeint - add node at the beginning of a doubly linked list
 * @head: the head point
 * @n: the data to inserted
 * Return: a new on success or null if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	

	if (*head == NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}
