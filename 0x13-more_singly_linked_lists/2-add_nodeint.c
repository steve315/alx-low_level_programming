#include "lists.h"
/**
 * add_nodeint - adds node at the beginning
 * @n: node content
 * @head: first node in list
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (node == NULL)
	{
		return (NULL);
	}

	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
