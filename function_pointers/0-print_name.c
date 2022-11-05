#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that print name
 *
 * @name: name inputted
 * @f: function pointer
 *
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{

	if (f != NULL)
	{
		f(name);
	}
}
