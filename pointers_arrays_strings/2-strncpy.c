#include "main.h"

/**
* _strncpy - function that copies a string
*
* @src: does not need to be null-terminated if it contains n or more bytes
* @dest: the source string to be appened
* @n: byte from @src
*
* Return: A pointer to the resulting string @dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int a = 0, b = 0;
while (src[a])
{
a++;
}
while (b < n && src[b])
{
dest[b] = src[b];
b++;
}
while (b < n)
{
dest[b] = '\0';
b++;
}
return (dest);
}
