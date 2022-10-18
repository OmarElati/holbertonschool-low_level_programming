#include "main.h"

/**
* _print_rev_recursion - Function to print reverse of the passed string
*
* @s: string
* 
* return: Empty  
*/
void _print_rev_recursion(char *s)
{
if (*s)
{
reverse(s + 1);
_putchar("%c, *s");
}
}
