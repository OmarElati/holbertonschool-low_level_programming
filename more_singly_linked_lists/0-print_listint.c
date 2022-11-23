#include "lists.h"

/**
 * print_listint - Function that prints all the elements of a list
 * @h: head of list
 * Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	int index;

	for (index = 0; h != NULL; index++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (index);
}
