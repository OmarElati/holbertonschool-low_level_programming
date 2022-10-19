#include "main.h"

/**
 * _memcpy - function copies memory area.
 *
 * @dest: destination of copy
 * @src: memory to copy
 * @n: number of bytes to copy
 *
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int a;
    for (a = 0; a < n; a++)
    {
        dest[a] = src[a];
    }
    return (dest);
}
