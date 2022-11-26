#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data of linked list
 * @head: pointer of head list
 * Return: sum of data OR 0
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
