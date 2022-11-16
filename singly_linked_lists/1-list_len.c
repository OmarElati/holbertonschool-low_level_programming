#include "lists.h"

/**
 * list_len - Function that returns the number of elements in a linked list
 * @h: constant list
 * Return: length of element
*/

size_t list_len(const list_t *h)
{
	int count = 0;

	for (count = 0; h != NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
