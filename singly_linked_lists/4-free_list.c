#include "lists.h"

/**
 * free_list - Function that frees a list
 * @head: poiter of link of list
 * Return: Empty
*/
void free_list(list_t *head)
{
	list_t *node = head;
	list_t *i;

	while (node != NULL)
	{
		i = node;
		node = node->next;
		free(i->str);
		free(i);
		head = NULL;
	}
}
