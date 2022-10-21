#include "lists.h"

/**
 * add_node_end - add element a beginning of list
 * @head: update the head node
 * @str: the string to add
 * Return: the node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *ptr = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		return (*head = new_node);
	}

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = new_node;

	return (*head);
}
