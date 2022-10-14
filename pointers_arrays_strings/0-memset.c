#include "main.h"

/**
 * _memset - function make fills memory with a constant byte
 *
 * @s: the memory area
 * @b: character of fills
 * @n: number of bytes
 *
 * Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
{
s[a] = b;
}
return (s);
}
