#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * 
 * @size: 
 * @c:
 * 
 * Return:
*/
char *create_array(unsigned int size, char c)
{
    char *str;
    unsigned int a;

    if (!size)
    {
        return (NULL);
    }
    str = malloc(sizeof(char) * size);
    if (!str)
    {
        return (NULL);
    }
    for (a = 0; a < size; ++a)
    {
        str[a] = c; 
    }
    return (str);
}