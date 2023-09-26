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
	listint_t *prev;
	listint_t *node;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	tmp = malloc(sizeof(listint_t));
	node = malloc(sizeof(listint_t));
	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	node = *head;
	prev = NULL;
	for (x = 0; x < index; x++)
	{
		if (node == NULL)
		{
			return (-1);
		}
		prev = node;
		node = node->next;
	}
	if (node == NULL)
	{
		return (-1);
	}
	prev->next = node->next;
	free(node);
	return (1);
}
