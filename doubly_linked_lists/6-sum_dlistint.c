#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of all data of linked list
 * @head: head of doubly linked list
 * Return: 0
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
