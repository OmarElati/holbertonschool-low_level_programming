#include "main.h"

/**
* _strlen_recursion - Function that returns the length of the string.
*
* @s: string.
*
* Return: 0 OR to Length
*/

int _strlen_recursion(char *s)
{
int count = 0;
while (*s != '\0')
{
count = count + 1;
s++;
}
return (count);
}
