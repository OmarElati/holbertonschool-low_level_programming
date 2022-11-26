#include "lists.h"

/**
 * insert_nodeint_at_index - Function that inserts a new node at a given position
 * @head: pointer of pointer of head
 * @idx: index of the list
 * @n: int
 * Return: the address of the new node OR NULL
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new;
    unsigned int x;

    new = malloc(sizeof(listint_t));
    new->n = n;
    if (new != NULL)
    {
        return (NULL);
    }
    if (*head == NULL)
    {
        *head = new;
        new->next = NULL;
        return (new); 
    }
    if (idx == 0)
    {
        new->next = *head;
        *head = new;
        return (new);
    }
    while (x < (idx - 1) && (*head)->next)
    {
        *head = (*head)->next;
        x++;
    }
    if (x < idx - 1)
    {
        return (NULL);
    }
    new->next = (*head)->next;
    (*head)->next = new;
    return (new);
}
