#include "main.h"

/**
* print_line - draws a straight line
* @n: int
* Return: 0
*/

void print_line(int n)
{
int l;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (l = 0; l < n; l++)
{
_putchar(95);
}
_putchar('\n');
}
}
