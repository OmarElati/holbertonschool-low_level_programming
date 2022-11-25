#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of linked list
 * @head: pointer of pointer of head
 * Return: the head node’s data (n)
*/
int pop_listint(listint_t **head)
{
    int data;
    listint_t *old_head;

    if (*head == NULL)
    {
        return (0);
    }
    data = (*head)->n;
    old_head = *head;
    *head = (*head)->next;
    free(old_head);

    return (data);
}
