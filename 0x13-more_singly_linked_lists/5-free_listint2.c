#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: first node in list
 * Return: ) on success
 */
void free_listint2(listint_t **head)
{
	listint_t *x;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		x = (*head)->next;
		free(*head);
		*head = x;
	}
	*head = NULL;
}
