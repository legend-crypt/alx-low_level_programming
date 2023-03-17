include "lists.h"

/**
 * add_dnodeint - add node at the beginning of a doubly linked list
 * @head: the head point
 * @n: the data to inserted
 * Return: a new on success or null if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (*head == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;

}
