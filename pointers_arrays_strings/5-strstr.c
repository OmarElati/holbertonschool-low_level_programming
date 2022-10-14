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
int a;
if (*needle == 0)
{
return (haystack);
}
while (*haystack)
{
if (haystack[a] == needle[a])
{
do {
if (needle[a + 1] == '\0')
{
return (haystack);
}
a++;
} while (haystack[a] == needle[a]);
}
haystack++;
}
return ('\0');
}
