#include "main.h"
/**
*times_table - Print the times table
*
*Return: Anything
*/
void times_table(void)
{
int i, j, s, d, p;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
s = i * j;
if (s > 9)
{
d = s % 10;
p = (s - d) / 10;
_putchar(',');
_putchar(32);
_putchar(p + '0');
_putchar(d + '0');
}
else
{
if (j != 0)
{
_putchar(',');
_putchar(32);
_putchar(32);
}
_putchar(s + '0');
}
}
_putchar('\n');
}
}
