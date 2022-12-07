#include "lists.h"

/**
 * create_node - create new node 
 * @n: data to added to node
 * Return: pointer
*/
dlistint_t *create_node(const int n)
{
	dlistint_t *new_node, *tmp_node;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	tmp_node = *head;
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

/**
 * insert_dnodeint_at_index - Function inserts a new node at a given position
 * @h:pointer of pointer of head list
 * @idx: index of the list
 * @n: int
 * Return: the address of the new node OR NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *tmp_node;
	unsigned int x = 0;

	new_node = create_node(n);
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*h == NULL)
	{
		*h = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	tmp_node = *h;
	while (x < (idx - 1) && tmp_node->next != NULL)
	{
		tmp_node = tmp_node->next;
		x++;
	}
	if (x < idx - 1)
	{
		return (NULL);
	}
	new_node->next = tmp_node->next;
	tmp_node->next = new_node;
	return (new_node);
}
