#include "lists.h"
/**
 * list_len - returns the number of elements in a list
 * @h: list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL) /*checks if list is empty*/
	{
		num_nodes = num_nodes + 1;
		h = h->next;
	}
	return (num_nodes);
}
