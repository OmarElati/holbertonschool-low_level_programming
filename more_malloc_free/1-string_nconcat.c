#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: positive int
 * Return: pointer OR NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int lens1 = 0, lens2, index;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (lens1 = 0; s1[lens1] != '\0'; ++lens1);
	for (lens2 = 0; s2[lens2] != '\0'; ++lens2);
	
	if (n >= lens2) {
		n = lens2;
	}

	ptr = malloc(sizeof(char) * (lens1 + n + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (index = 0; index < lens1; index++)
	{
		ptr[index] = s1[index];
	}

	for (index =lens1; index < n + lens1; index++)
	{
		ptr[index] = s2[index - lens1];
	}
	ptr[index] = '\0';
	return (ptr);
}
