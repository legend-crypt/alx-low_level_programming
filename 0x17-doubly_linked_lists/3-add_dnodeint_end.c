#include "lists.h"

/**
 * add_dnodeint_end - add node at end of a list
 * @head: the head node
 * @n: the data
 * Return: the head
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp_node;
	dlistint_t *new_node;

	temp_node = NULL;
	new_node = NULL;

	new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	temp_node = *head;
	new_node->n = n;
	new_node->next = NULL;
	while (temp_node->next != NULL)
	{
		temp_node = temp_node->next;
	}
	new_node->prev = temp_node;
	temp_node->next = new_node;
	return (new_node);
}
