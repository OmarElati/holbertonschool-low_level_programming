#include <stdio.h>
/**
* main - Entry point
*
*Return: o
*/
int main(void)
{
int a, b;
for (a = '0'; a <= '9'; a++)
{
for (b = '0'; b <= '9'; b++)
{
if (b > a)
{
if (a != '8' || (a == '8' && b != 9))
{
putchar(a);
putchar(b);
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
