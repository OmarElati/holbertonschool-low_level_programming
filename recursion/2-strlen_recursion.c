#include "main.h"
#include <stdio.h>

/**
*_strlen_recursion - function returns the length of a string
*@s: string
*return: to length
*/

int _strlen_recursion(char *s)
{
int len = 0;
if (*s)
{
len++;
len += _strlen_recursion (s + 1);
putchar(len);
}
return (len);
}
