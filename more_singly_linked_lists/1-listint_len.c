#include "lists.h"

/**
 * listint_len - Function return the number of elements in a linked list
 * @h: head of list
 * Return: the number of elements
*/
size_t listint_len(const listint_t *h)
{
	int len;

	for (len = 0; h!= NULL; len++)
	{
		h = h->next;
	}
	return (len);
}
