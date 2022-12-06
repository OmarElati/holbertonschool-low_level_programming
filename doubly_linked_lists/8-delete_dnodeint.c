#include "lists.h"
/**
 * delete_dnodeint_at_index - Function deletes the node at index of linked list
 * @head: pointer of pointer of head
 * @index: index of linked list
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
{
    dlistint_t *d_node, *tmp_node;
	unsigned int x = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	d_node = *head;

	if (index == 0)
	{
		*head = d_node->next;
		free(d_node);
		return (1);
	}
	while (x < index && d_node->next != NULL)
	{
		tmp_node = d_node;
		d_node = d_node->next;
		x++;
	}
	if (x < index)
	{
		return (-1);
	}
	tmp_node->next = d_node->next;
	free(d_node);
	return (1);
}