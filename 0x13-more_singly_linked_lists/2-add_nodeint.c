#include "lists.h"
/**
 * add_nodeint - insert node at the begining
 * @head: the head
 * @n: the new data
 * Return: the head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = *head;
	if (new_node == NULL)
	{
		return (NULL);
	}
	*head = new_node;
	return (*head);
}
