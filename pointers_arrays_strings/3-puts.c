#include "main.h"
/**
* _puts - writes the string s 
* 
* @str: string s
*
* return: Empty
*/
void _puts(char *str)
{
for (;*str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
