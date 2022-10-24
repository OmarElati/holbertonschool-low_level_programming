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
	int len;
	int a = 0;

	if (!s1)
	{
		s1 = "";
	}
	if (s2)
	{
		s2 = "";
	}
	while (s1[a])
	{
		++a;
	}
	len = a;
	a = 0;
	while (s2[a])
	{
		++a;
	}
	len += a;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
	{
		return (NULL);
	}

	for (a = 0; *s1; ++a)
	{
		str[a] = *(s1++);
	}
	for (; a <= len; ++a)
	{
		str[a] = *(s2++);
	}
	return (str);
}
