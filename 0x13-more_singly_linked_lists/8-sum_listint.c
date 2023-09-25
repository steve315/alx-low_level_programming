#include "lists.h"
/**
 * sum_listint - returns the sum of all the data
 * @head: first node in list
 * Return: sum of all the data(n);
 */
int sum_listint(listint_t *head)
{
	unsigned int sum;
	listint_t *tmp;

	sum = 0;
	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
