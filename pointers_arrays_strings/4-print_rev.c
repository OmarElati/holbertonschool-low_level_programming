#include "main.h"

/**
 * print_rev - Prints a string, in reverse
 *
 * @s: str
 *
 * return: Reverse str
 */
void print_rev(char *s)
{
int c = 0;
while (s[c] != '\0')
{
c++;
}
while (c > 0)
{
c--;
_putchar(s[c]);
}
_putchar('\n');
}
