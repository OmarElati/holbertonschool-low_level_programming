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
	dlistint_t *new_node = malloc(sizeof(dlistint_t)), *tmp_node = *h;
	unsigned int x = 0;

	if (new_node)
	{
		new_node->n = n;
		if (idx == 0)
		{
			if (*h)
			{
				new_node->next = *h;
				(*h)->prev = new_node;
			}
			*h = new_node;
			return (new_node);
		}			
		while (x < idx - 1 && tmp_node)
		{
			tmp_node = tmp_node->next;
			x++;
		}
		if (tmp_node)
		{
			if (tmp_node)
			{
				if (tmp_node->next)
					tmp_node->next->prev = new_node;
				new_node->next = new_node->next;
				new_node->prev = new_node;
				tmp_node->next = tmp_node;
				return (new_node);
			}
		}
	}
	return (NULL);
}
