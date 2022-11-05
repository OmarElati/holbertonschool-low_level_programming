#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * array_iterator -function given as a parameter on each element of an array
 *
 * @array: is the array
 * @size: is the size of array
 * @action: is the pointer function
 *
 * Return: a void pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
