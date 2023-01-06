#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 * Return: the first index where value is located
*/
int linear_search(int *array, size_t size, int value)
{
	unsigned int x;

	if (array == NULL)
	{
		return(-1);
	}
	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%u] = [%d]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
