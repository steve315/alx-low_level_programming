#include "lists.h"
/**
 * free_listint_safe - frees a list in safe mode
 * @h: list
 * Return: number of nodes in list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *node;
	listint_t *temp;
	size_t count;

	count = 0;
	node = *h;

	while (node != NULL)
	{
		temp =  node;
		node = node->next;
		free(temp);

		if (temp <= node)
		{
			exit(98);
		}
	}
	*h = NULL;

	return (count);

}
