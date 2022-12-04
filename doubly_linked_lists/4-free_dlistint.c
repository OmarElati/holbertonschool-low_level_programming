#include "lists.h"
/**
 * free_dlistint - function that frees a list
 * @head: pointer of list
 * Return: Empty
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp_node;

	while (head != NULL)
	{
		tmp_node = head;
		head = head->next;
		free(tmp_node);
	}
}
