#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * @s: string
 * @c: character
 *
 * Return: s or NULL
*/

char *_strchr(char *s, char c)
{
int a;
for (a = 0; s[a]; a++)
{
if (s[a] == c)
{
return (s + a);
}
}
if (s[a] == c)
{
return (s + a);
}
return (0);
}
