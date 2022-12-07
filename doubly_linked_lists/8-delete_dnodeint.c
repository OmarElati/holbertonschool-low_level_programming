#include "lists.h"

/**
 * delete_node - Delete a node
 * @node: node to node
 * Return: empty
*/
void delete_node(dlistint_t *node)
{
	if (node->next != NULL)
	{
		node->next->prev = node ->prev;
	}
	if (node->prev != NULL)
	{
		node->prev->next = node->next;
	}
	free(node);
}
/**
 * delete_dnodeint_at_index - Function deletes the node at index of linked list
 * @head: pointer of pointer of head
 * @index: index of linked list
 * Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp_node;
	unsigned int x = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	tmp_node = *head;

	if (index == 0)
	{
		tmp_node = tmp_node->next;
		delete_node(*head);
		*head = tmp_node;
		return (1);
	}
	while (1)
	{
		if (tmp_node == NULL)
		{
			return (-1);
		}
		if (x == index)
		{
			break;
		}
		tmp_node = tmp_node->next;
		x++;
	}
	if (x < index)
	{
		return (-1);
	}
	delete_node(d_node);
	return (1);
}
