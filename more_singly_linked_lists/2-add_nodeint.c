#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at the beginning of a list
 * @head: pointer to pointer of linked list
 * @n: constant int
 * Return:  the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL && n != 0)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
