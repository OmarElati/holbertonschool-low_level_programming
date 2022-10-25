#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int index = 0, len = 0, a = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (index = 0; s1[index] || s2[index]; index++)
	{
		len++;
	}

	str = malloc(sizeof(char) * len);

	if (str == NULL)
	{
		return (NULL);
	}

	for (index = 0; s1[index]; index++)
	{
		str[a++] = s1[index];
	}

	for (index = s1[index]; s2[index]; index++)
	{
		str[a++] = s2[index];
	}

	return (str);
}
