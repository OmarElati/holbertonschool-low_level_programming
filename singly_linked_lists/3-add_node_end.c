#include "lists.h"

/**
 * add_node_end - Function that adds a new node at the end of a list
 * @head: pointer to pointer of head of linked list
 * @str: const char of pointer
 * Return: the address of the new element OR NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
    int i;
	char *new_str = strdup(str);
	list_t *new_head = NULL;
    list_t *last = *head;

	if (!new_str)
	{
		return (NULL);
	}
	for (i = 0; new_str[i] != '\0'; i++)
	{
		;
	}
	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
	{
		free(new_str);
		return (NULL);
	}
	new_head->str = new_str;
	new_head->len = i;
	new_head->next = NULL;
    if (*head == NULL)
    {
        *head = new_head;
        return (new_head);
    }
    while (last->next)
    {
        last = last->next;
    }
	last->next = new_head;
	return (new_head);
}
