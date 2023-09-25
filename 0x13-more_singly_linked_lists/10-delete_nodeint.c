#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at specified index
 * @head: pointer to the first node
 * @index: index of node to delete
 * Return: 1 on success or -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *tmp;
	listint_t *node;

	tmp = malloc(sizeof(listint_t));
	node = malloc(sizeof(listint_t));
	x = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (x < index - 1)
	{
		if (tmp == NULL || (tmp->next) == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
		x++;
	}
	node = tmp->next;
	tmp->next = node->next;
	free(node);
	return (1);
}
