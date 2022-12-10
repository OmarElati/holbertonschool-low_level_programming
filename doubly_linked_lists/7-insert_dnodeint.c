#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts new node position
 * @h: pointer of pointer of head
 * @idx: index of the list
 * @n: int
 * Return: the address of the new node OR NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp_node;
	unsigned int x = 0;

	tmp_node = malloc(sizeof(dlistint_t));
	if (tmp_node == NULL)
		return (NULL);
	tmp_node->n = n;
	new_node = *h;
	if (idx == 0)
	{
		if (*h)
		{
			tmp_node->next = *h;
			(*h)->prev = tmp_node;
		}
		*h = tmp_node;
		return (*h);
	}
	while (x < (idx - 1) && tmp_node)
	{
		new_node = new_node->next;
		x++;
	}
	if (new_node)
	{
		if (new_node->next)
		{
			new_node->next->prev = tmp_node;
		}
		tmp_node->next = new_node->next;
		tmp_node->prev = new_node;
		new_node->next = tmp_node;
		return (tmp_node);
	}
	return (NULL);
}
