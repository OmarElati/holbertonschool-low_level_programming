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
		printf("");
	}
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		if ((d->age) == 0.0)
		{
			printf("Age: %f\n", d->age);
		}
		if (d->age != 0)
		{
			printf("Age: %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
