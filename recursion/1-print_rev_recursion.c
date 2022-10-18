#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion - Function to print reverse of the passed string
*
* @s: string
* 
* return: Empty  
*/
void _print_rev_recursion(char *s)
{
int h;
if (s[h] == '\0')
{
return;
}
reverse(s, h + 1);
printf("%c", s[h]);
}
