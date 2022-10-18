#include "main.h"

/**
*_strlen_recursion - function returns the length of a string
*@s: string
*return: to length
*/

int _strlen_recursion(char *s)
{
int len;
for (len = 0; *s != '\0'; s++)
{
len++;
}
return(len);
}
