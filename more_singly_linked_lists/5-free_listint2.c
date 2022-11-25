#include "lists.h"

/**
 * free_listint - Function that frees a list.
 * @head: poiter of head of list
 * Return: Empty
*/
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

/**
 * free_listint2 -function that frees a list
 * @head: pointer of pointer of head
 * Return: Empty
*/
void free_listint2(listint_t **head)
{
	if (head != NULL)
	{
		free_listint(*head);
		*head = NULL;
	}
	head = NULL;
}
