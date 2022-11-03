#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - function that print struct
 * @d: pointer of struct dog
 * Return: Empty
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("nil");
	}
	else if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("name: (nil)\n");
		}
		if (d->name != NULL)
		{
			printf("name: %s\n", d->name);
		}
		if ((d->age) == 0.0)
		{
			printf("age: (nil)\n");
		}
		if (d->age != 0)
		{
			printf("age: %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("owner: (nil)\n");
		}
		if (d->owner != NULL)
		{
			printf("owner: %s\n", d->owner);
		}
	}
}
