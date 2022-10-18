#include "main.h"

/**
*
* 
* 
* 
*/
void _print_rev_recursion(char *s)
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