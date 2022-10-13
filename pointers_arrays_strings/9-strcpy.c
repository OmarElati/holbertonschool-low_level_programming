#include "main.h"
/**
*_strcpy - copie the string pointed to by @src, including
*   the terminating null byte, to the buffer pointed to by @dest.
*
*@dest: the buffer pointed to copy the string.
*@src: the source string to copy.
*
*Return : to string @dest.
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
