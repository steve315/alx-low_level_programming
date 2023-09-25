#include "lists.h"
/**
 * pop_listint - deletes head node
 * @head: first element in list
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (*head == NULL)
	{
		return (0);
	}
	x = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (x);
}
