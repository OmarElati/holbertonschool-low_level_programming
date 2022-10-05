#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always (success)
 */
int main(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
if (a == 'e' || a == 'q')
{
a++;
}
putchar (a);
}
putchar ('\n');
return (0);
}
