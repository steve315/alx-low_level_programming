#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at given position
 * @head: add of first node
 * @idx: index to insert new node at
 * @n: data to insert
 * Return: 0 on success
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *tmp = *head;
	unsigned int x;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (x = 0; x < idx - 1; x++)
	{
		if (tmp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		tmp = tmp->next;
	}
	if (tmp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = tmp->next;
	tmp->next = new_node;

	return (new_node);
}
