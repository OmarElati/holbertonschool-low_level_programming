#include "main.h"

/**
* rev_string - print string then rev a string
*
* @s: string s
*
* return: Empty
*/
void rev_string(char *s)
{
int c, b, d;
char *a, temp;
a = s;
while (s[c] != '\0')
{
c++;
}
for (b = 1; b < c; b++)
{
a++;
}
for (d = 0; d < (c / 2); d++)
{
temp = s[d];
s[d] = *a;
*a = temp;
a--;
}
}
