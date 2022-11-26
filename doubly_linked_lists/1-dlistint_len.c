#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements of list
 * @h: head of list
 * Return: the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
