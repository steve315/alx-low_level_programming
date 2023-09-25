#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node
 * @head: first node in list
 * @index: index of node to find
 * Return: index of nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int x;

	temp = head;
	x = 0;
	while (temp && x < index)
	{
		temp = temp->next;
		x++;
	}
	if (temp)
		return (temp);
	else
		return (NULL);
}
