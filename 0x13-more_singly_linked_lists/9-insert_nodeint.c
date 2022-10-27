#include "lists.h"
/**
  *insert_nodeint_at_index - insert a node at a given index
  *@head: the head
  *@idx: the index
  *@n: the data to be inserted
  *Return: the head
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	i = 1;
	new_node->n = n;

	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		new_node = *head;

	while (temp && i < idx)
	{
		temp = temp->next;
		i++;
	}
	if (i == idx)
	{
		new_node->next = temp->next;
		temp->next = new_node;
	}
	else
		return NULL;

	return (temp);
}
