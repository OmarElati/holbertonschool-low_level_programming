#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of linked list
 * @head: head of list
 * @index: index of list
 * Return: pointer
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = head;

	while (i < index && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	if (i == index)
	{
		return (tmp);
	}
	else
	{
		return (NULL);
	}
}
