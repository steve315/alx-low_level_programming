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
	listint_t *new_node, *tmp;
	unsigned int x;

	new_node = malloc(sizeof(listint_t));
	tmp = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;  
		*head = new_node;
		return (new_node);
	}
	for (x = 0; tmp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			new_node = tmp->next;
			tmp->next = new_node;
			return (new_node);
		}
		else
		{
			tmp = tmp->next;
		}
	}
	return (NULL);
}
