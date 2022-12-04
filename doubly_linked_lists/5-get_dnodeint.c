#include "lists.h"

/**
 * get_dnodeint_at_index - Get node at index
 * @head: pointer of head of list
 * @index: index of list
 * Return: pointer
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *tmp_node = head;

	while (i < index && tmp_node != NULL)
	{
		tmp_node = tmp_node->next;
		i++;
	}
	if (i == index)
	{
		return (tmp_node);
	}
	else
	{
		return (NULL);
	}
}
