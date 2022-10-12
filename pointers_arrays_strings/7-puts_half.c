#include "main.h"
/**
*_strlen - Using the strlen method to calculate the length of the string
*@s: char
*Return: Nthing
*/
int _strlen(char *str)
{
int  n;
for (n = 0; *str != '\0'; str++)
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
int n;
n = (_strlen(str)) / 2;
while (n < _strlen(str))
{
_putchar(str[n]);
n++;
}
_putchar('\n');
}
