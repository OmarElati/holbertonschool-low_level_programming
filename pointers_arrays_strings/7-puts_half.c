#include "main.h"
/**
*_strlen - Using the strlen method to calculate the length of the string
*@s: char
*Return: Nthing
*/
int _strlen(char *s)
{
int  n;
for (n = 0; *s != '\0'; s++)
{
n++;
}
return (n);
}
/**
* puts_half - print the second half of the string
*
* @str: string
*
* return: Empty
*/
void puts_half(char *str)
{
int n = 0;
n = (_strlen(str)+1) / 2;
while (n < _strlen(str))
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
