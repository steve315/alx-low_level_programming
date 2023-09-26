#include "lists.h"
/**
 * pop_listint - deletes head node
 * @head: first element in list
 * Return: 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int x;

	if (*head == NULL)
	{
		return (0);
	}
	// temp = head;
	x = temp->n;
	*head = (*head)->next;
	free(temp);

	return (x);
}
