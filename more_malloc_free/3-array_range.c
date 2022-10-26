#include "main.h"
#include <stdlib.h>
 /**
  * array_range - Function that creates an array of integers
  * @min: all the values maximum
  * @max: all the values maximum
  * Return: NULL
 */
int *array_range(int min, int max)
{
    int index, *array, size;

    if (min > max)
    {
        return (NULL);
    }

    size = max - min + 1;
    array = malloc(sizeof(int) * size);
    
    if (array == NULL)
    {
        return (NULL);
    }
    
    for (index = 0; index < size; index++)
    {
        array[index] = min++;
    }
    return (array);
}
