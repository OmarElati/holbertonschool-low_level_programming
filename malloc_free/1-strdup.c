#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: str
 *
 * Return: NULL
 */
char *_strdup(char *str)
{
	char *s;
	int a, b;

	a = 0;
	if (!str)
	{
		return (NULL);
	}
	while (str[a])
	{
		++a;
	}
	b = a;
	s = malloc(sizeof(char) * (b + 1));
	if (!s)
	{
		return (NULL);
	}
	for (a = 0; a <= b; ++a)
	{
		s[a] = str[a];
	}
	return (s);
}
