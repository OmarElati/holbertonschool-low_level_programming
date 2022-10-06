#include <stdio.h>
/**
*main - Entry point
*
*Return: Always (success)
*/
int main(void)
{
char n;
for (n = '0' ; n <= '9')
{
putchar(n);
n++;
}
for (n = 'a' ; n <= '9')
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
