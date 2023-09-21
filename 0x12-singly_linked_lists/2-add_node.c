#include "lists.h"
/**
 * add_node - adds a node at the beginning
 * @head: pointer to the first node
 * @str: data
 * Return: 0 on success
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *node = malloc(sizeof(list_t));

	node->str = strdup(str);

	if (*head == NULL)
	{
		node->next = NULL;
	}
	else
	{
		node->next = *head;
	}
	*head = node;
	return (node);
}
