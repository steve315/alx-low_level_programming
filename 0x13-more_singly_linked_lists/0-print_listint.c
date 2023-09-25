#include "lists.h"
/**
 * print_listint - prints a list
 * @h: list to be printed
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0; /*stores no of nodes inlist*/

	while (h != NULL) /*checks if list is empty*/
	{
		printf("%u\n", h->n);
		num_nodes = num_nodes + 1;
		h = h->next;
	}
	return (num_nodes);
}
