#include "main.h"
/**
* _strlen - Using the strlen method to calculate the length of the string
*
* @s: char
*
* Return: Empty
*/
int _strlen(char *s)
{
int  c;
for (c = 0; *s != '\0'; s++)
{
c++;
}
return (c);
}
/**
* puts2 - prints every other character of a string
*
* @str: string
*
* return: Empty
*/
void puts2(char *str)
{
int i;
for (i = 0; i < _strlen(str); i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
