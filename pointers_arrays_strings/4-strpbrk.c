#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s: string
 * @accept: string
 *
 * Return: accept or NULL
*/

char *_strpbrk(char *s, char *accept)
{
int a, b;
for (a = 0; s[a]; a++)
{
for (b = 0; accept[b]; b++)
{
if (s[a] == accept[b])
{
break;
}
if (accept[b])
{
return (s + a);
}
}
}
return (0);
}
