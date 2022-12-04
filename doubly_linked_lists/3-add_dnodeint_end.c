#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: pointer to pointer of linked list
 * @n: constant int
 * Return: the address of the new element, or NULL if it failed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	while (tmp_node->next != NULL)
	{
		tmp_node = tmp_node->next;
	}
	new_node->prev = tmp_node;
	new_node->next = NULL;
	tmp_node->next = new_node;
	return (new_node);
}
