#include "lists.h"
/**
 * print_listint_safe - prints list in safe mode
 * @head: first element in list
 * Return: count
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *node = head;
	const listint_t *loop = head;
	const listint_t *node2 = head;

	size_t count = 0;

	while (node2 != NULL && node2->next != NULL)
	{
		loop = loop->next;
		node2 = node2->next->next;
		count++;

		if (loop == node2)
		{
			exit(98);
		}
	}

	node = head;

	while (node != NULL)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		node = node->next;
		count++;
	}

	return (count);
}
