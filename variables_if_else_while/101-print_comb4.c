#include <stdio.h>
/**
* main - Entry point
*
*Return: o
*/
int main(void)
{
int a, b, c;
for (a = '0'; a <= '7'; a++)
{
for (b = '1'; b <= '8'; b++)
{
for (c = '2'; c <= '9'; c++)
{
if (c > b && b > a)
{
putchar(a);
putchar(b);
putchar(c);
if (a != '7')
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
