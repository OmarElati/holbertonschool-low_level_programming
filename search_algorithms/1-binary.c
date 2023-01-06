#include "search_algos.h"

/**
 * binary_search - searches a value in a sorted array of integers
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the index where value is located OR -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t x, Upper, Lower;

	if (array == NULL)
	{
		return (-1);
	}
	for (Upper = 0, Lower = size - 1; Lower >= Upper;)
	{
		printf("Search in array: ");
		for (x = Upper; x < Lower; x++)
		{
			printf("%d", array[x]);
		}
		printf("%d\n", array[x]);
		x = Upper + (Lower - Upper) / 2;
		if (array[x] == value)
		{
			return (x);
	    }
		if (array[x] > value)
		{
			Lower = x - 1;
		}
		else
		{
			Upper = x + 1;
		}
	}
	return (-1);
}
