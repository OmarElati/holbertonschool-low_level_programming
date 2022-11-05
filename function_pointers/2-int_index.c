#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 *
 * @array: is the array
 * @size: is the number of elements in the array
 * @cmp:is a pointer to the function to be used to compare values
 *
 * Return: -1 OR index
*/
int int_index(int *array, int size, int (*cmp)(int))
{
    int idx = 0, x;

    if (size <= 0)
    {
        return (-1);
    }
    if (cmp != NULL && array != 0)
    {
        for (idx = 0; idx < size; idx++)
        {
            x = cmp(array[idx]);
            if (x != 0)
            {
                return (idx);
            }
        }
    }
    return (-1);
}
