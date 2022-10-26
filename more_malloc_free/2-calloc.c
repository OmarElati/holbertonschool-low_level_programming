#include "main.h"
#include <stdlib.h>
/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: memory for an array of element
 * @size: bytes each and returns a pointer to the allocated memory
 * Return: NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *memory;
    char *in;
    unsigned int index;

    if (nmemb == 0 )
    {
        return (NULL);
    }
        if (size == 0)
    {
        return (NULL);
    }


    memory = malloc(nmemb * size);

    if (memory == NULL)
    {
        return (NULL);
    }
    in = memory;
    for (index = 0; index < (nmemb * size); index++)
    {
        in[index] = '\0';
    }
    return (memory);
}
