#include "lists.h"

/**
 * add_dnodeint_end - add a node at the end of a doubly linked list
 * @head: the head pointer
 * @n: the data to be inserted
 * Return: a new node of success or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;


	if (*head == NULL)
	{
		new_node->n = n;
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	while (temp)
	{
		temp = temp->next;
	}
	new_node->n = n;
	new_node->prev = temp;
	new_node->next = NULL;
	temp->next = new_node;
	return (new_node);
}
