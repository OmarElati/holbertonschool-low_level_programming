#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width:  width of array
 * @height: height of array
 *
 * Return: a double pointer to the 2d array
 */
int **alloc_grid(int width, int height)
{
    int a = 0, b;
    int **c;

    if (width <= 0 || height <= 0)
    {
        return (NULL);
    }
    c = (int **)malloc(sizeof(int *) * height);

    if (c[a] == NULL)
    {
        return (NULL);
    }
    for (a = 0; a < height; a++)
    {
        c[a] = (int *)malloc(sizeof(int) * width);
        if (c[a] == NULL)
        {
            for (b = 0; b < a; b++)
            {
                free(c[b]);
            }
            free(c);
            return (NULL);
        }
        for (b = 0; b < width; b++)
        {
            c[a][b] = 0;
        }
    }
    return (c);
}
