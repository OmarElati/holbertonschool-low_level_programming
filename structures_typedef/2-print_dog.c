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
		return;
	}
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
