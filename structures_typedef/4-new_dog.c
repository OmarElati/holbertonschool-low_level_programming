#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - function that creates a new dog
 *
 * @name: name of the new dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Empty
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int c1, c2, c3;
	char *space_name, *space_owner;
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	for (c1 = 0; name[c1] != '\0'; c1++)
		;
	for (c2 = 0; owner[c2] != '\0'; c2++)
		;
	space_name = malloc(sizeof(char) * c1 + 1);
	if (space_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	for (c3 = 0; c3 <= c1; c3++)
	{
		space_name[c3] = name[c3];
	}
	space_owner = malloc(sizeof(char) * c2 + 1);
	if (space_owner == NULL)
	{
		free(new_dog);
		free(space_name);
		return (NULL);
	}
	for (c3 = 0; c3 <= c2; c3++)
	{
		space_owner[c3] = owner[c3];
	}

	new_dog->name = space_name;
	new_dog->age = age;
	new_dog->owner = space_owner;
	return (new_dog);
}
