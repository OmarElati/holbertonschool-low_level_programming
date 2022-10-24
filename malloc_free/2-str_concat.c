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
	int index, len = 0, a = 0;

	if (!s1)
	{
		s1 = "";
	}

	if (s2)
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

	for (index = 0; s2[index]; index++)
	{
		str[a++] = s1[index];
	}

	return (str);
}
