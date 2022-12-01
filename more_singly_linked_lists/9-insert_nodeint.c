#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts new node position
 * @head: pointer of pointer of head
 * @idx: index of the list
 * @n: int
 * Return: the address of the new node OR NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int x;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (head == NULL)
	{
		return (new);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	tmp = *head;
	while (x < (idx - 1) && tmp->next)
	{
		tmp = tmp->next;
		x++;
		if (tmp == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
