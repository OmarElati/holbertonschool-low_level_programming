#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block
 *
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size of the allocated space
 * @new_size: the new size of the new memory block
 *
 * Return: pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *tptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	tptr = malloc(new_size);
	if (tptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		tptr[i] = ((char *)ptr)[i];
	}

	free(ptr);
	return (tptr);
}
