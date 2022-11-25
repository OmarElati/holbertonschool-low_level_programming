#include "lists.h"

/**
 * add_nodeint_end - Function that adds a new node at the end of a list
 * @head: pointer to pointer of linked list
 * @h: constant int
 * Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL && n != 0)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	return (new);
}
