#include "lists.h"

/**
 * reverse_listint - reverse a singly linked list
 * @head: the head node
 * Return: a reversed singly linked List
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node = NULL;
	listint_t *prev_node = NULL;

	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}
	*head = prev_node;
	return (*head);
}
