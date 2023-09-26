#include "lists.h"
/**
 * reverse_listint - reverses a linked list
 * @head: first element in the linked list
 * Return: 0 on success
 */
listint_t *reverse_listint(listint_t **head)
{

	listint_t *first_node;
	listint_t *rest_list;

	if (*head == NULL || (*head)->next == NULL)
	{
		return (*head);
	}

	first_node = *head;
	rest_list = (*head)->next;

	*head = reverse_listint(&rest_list);

	first_node->next->next = first_node;
	first_node->next = NULL;

	return (*head);
}
