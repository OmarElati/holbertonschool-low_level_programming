#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: a pointer to be appended
 * @dest: the source string to be appened
 *
 * Return: A pointer to the destination string
*/

char *_strcat(char *dest, char *src)
{
int i = 0, len = 0;
while (dest[i])
{
i++;
len++;
}
for (i = 0; src[i]; i++)
{
dest[len] = src[i];
len++;
}
return (dest);
}
