#include "main.h"
/**
* puts2 - writes the string s
*
* @str: string s
*
* return: Empty
*/
void puts2(char *str)
{
for (; *str != '\0'; str++)
{
_putchar(*str);
str++;
}
_putchar('\n');
}
