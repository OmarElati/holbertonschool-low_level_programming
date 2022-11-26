#include "lists.h"

/**
 * dlistint_len - Function that returns the number of elements list
 * @h: head of list
 * Return: len
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
