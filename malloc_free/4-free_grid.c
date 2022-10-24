#include "main.h"
#include <stdio.h>

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid to free 
 * @height: height of grid
 * Return: void
*/
void free_grid(int **grid, int height)
{
    int index;

    for (index = 0; index < height; index++)
    {
        free(grid[index]);
    }
    free(grid);
}
