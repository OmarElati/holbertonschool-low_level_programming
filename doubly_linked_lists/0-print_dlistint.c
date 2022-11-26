#include "lists.h"

/**
 * print_dlistint - Function that prints all the elements of list
 * @h: head of list
 * Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (i);
}
