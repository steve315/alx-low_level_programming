#include "lists.h"
/**
 * free_list - frees list
 * @head: first node
 * Return: 0 on success
 */
void free_list(list_t *head)
{
	list_t *next;

	next = head->next;
	free(head->str);
	free(head);
	if (next == NULL)
		return;
	free_list(next);
}
