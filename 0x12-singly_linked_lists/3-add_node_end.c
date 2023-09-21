#include "lists.h"
/**
 * add_node_end - adds node at end
 * @head: ptr to first node
 * @str:data
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	list_t *last = *head;

	node->str = strdup(str);

	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (NULL);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = node;
	return (node);
}
