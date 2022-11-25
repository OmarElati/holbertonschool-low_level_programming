#include "lists.h"

/**
 * free_listint - Function that frees a list.
 * @head: poiter of head of list
 * Return: Empty
*/
void free_listint(listint_t *head)
{
    listint_t *n;

    if (head != NULL)
    {
        n = head;
        head = head->next;
        free(n);
    }
}
