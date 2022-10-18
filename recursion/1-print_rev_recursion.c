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
int index, n;
char temp;
if (index == n)
{
return;
}
temp = s[index];
reverse(s, index+1, n);
printf("%c", temp);
}
