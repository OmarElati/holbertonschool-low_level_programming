#include "lists.h"

/**
 * delete_nodeint_at_index - function delete the node index of linked list
 * @head: pointer of pointer of linked list
 * @index: index of node
 * Return: 1 if it succeeded OR -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    listint_t *d_node, *tmp_node;
	unsigned int x = 0;

	if (*head == NULL)
	{
		return (-1);
	}
    d_node = *head;

	if (index == 0)
	{
		d_node->next = *head;
        free (d_node);
		return (1);
	}
	while (x < index && d_node->next != NULL)
	{
        tmp_node = d_node
		d_node = d_node->next;
		x++;
	}
	if (x < index)
	{
		return (-1);
	}
	tmp_node->next = d_node->next;
	free(d_node)
	return (1);
}
