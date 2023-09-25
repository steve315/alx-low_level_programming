#include "lists.h"
/**
 * add_nodeint_end - adds node at the end of list
 * @head: first node in list
 * @n: node content
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_end = malloc(sizeof(listint_t));
	listint_t *temp = *head;

	if (node_end == NULL)
	{
		return (NULL);
	}
	node_end->n = n;
	node_end->next = NULL;
	if (*head == NULL)
	{
		*head = node_end;
		return (node_end);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = node_end;
	return (node_end);
}
