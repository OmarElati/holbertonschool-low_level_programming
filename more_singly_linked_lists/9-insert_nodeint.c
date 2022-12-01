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

	if (head == NULL)
	{
		return (NULL);
	}
	tmp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = tmp;
		*head = new;
		return (*tmp);
	}
	for (x = 0; i < (idx - 1); x++)
	{
		if (tmp)
		{
			tmp = tmp->next;
		}
		else
		{
			return (NULL);
		}
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}
