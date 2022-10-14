#include "main.h"

/**
* _strncat -  function is similar to the _strcat function
*
* @src: does not need to be null-terminated if it contains n or more bytes
* @dest: the source string to be appened
* @n: byte from @src
*
* Return: A pointer to the resulting string @dest
*/

char *_strncat(char *dest, char *src, int n)
{
int i = 0, len = 0;
while (dest[i] != 0)
{
i++;
len++;
}
if (i < n)
{
for (i = 0; src[i]; i++)
{
dest[len] = src[i];
len++;
}
}
return (dest);
}
