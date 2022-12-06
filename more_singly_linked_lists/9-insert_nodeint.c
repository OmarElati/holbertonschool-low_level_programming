#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts new node position
 * @head: pointer of pointer of head
 * @idx: index of the list
 * @n: int
 * Return: the address of the new node OR NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *tmp_node;
	unsigned int x = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	tmp_node = *head;
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
