#include "lists.h"
/**
 * print_list - function that prints a list
 * @h: list to be printed
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes = 0; /*stores the number of nodes in the list*/

	while (h != NULL) /*checks if list is empty*/
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		num_nodes = num_nodes + 1;
		h = h->next;
	}
	return (num_nodes);
}
