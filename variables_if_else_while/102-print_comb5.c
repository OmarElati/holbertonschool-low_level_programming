#include <stdio.h>
/**
* main - Entry point
*
*Return: o
*/
int main(void)
{
int a, b, c, d;
for (a = '0'; a <= '9'; a++)
{
for (b = '0'; b <= '9'; b++)
{
for (c = '0'; c <= '9'; c++)
{
for (d = '1'; d <= '9'; d++)
{
if (d > b || (a+b) > (c+d))
{
putchar(a);
putchar(b);
putchar(32);
putchar(c);
putchar(d);
if ((c = d = '9') && (a+b != 98))
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
