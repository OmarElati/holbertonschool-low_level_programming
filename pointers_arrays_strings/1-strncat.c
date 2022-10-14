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
}
if ((src[len] != 0) && (len < n))
{
dest[i] = src[len];
i++;
len++;
}
return (dest);
}
