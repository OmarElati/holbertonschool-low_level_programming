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
int i;
for (i = 0; i < _strlen(str); i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
