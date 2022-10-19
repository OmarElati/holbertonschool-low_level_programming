#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: string
 * @needle: string
 *
 * Return: to located substring or NULL
 */

char *_strstr(char *haystack, char *needle)
{
    unsigned int a = 0, b = 0;
    while (haystack[a])
    {
        while ((haystack[a] == needle[0]) && needle[b])
        {
            if (haystack[a + b] == needle[b])
            {
                b++;
            }
            else
            {
                break;
            }
        }
        if (needle[b])
        {
            a++;
            b = 0;
        }
        else
        {
            return (haystack + a);
        }
    }
    return ('\0');
}
