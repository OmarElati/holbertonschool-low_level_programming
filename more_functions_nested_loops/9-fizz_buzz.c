#include <stdio.h>
#include "main.h"

/**
* main - prints a Fizz program
*
* Return: 0
*/

int main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
if ((a % 3 == 0) && (a % 5 == 0))
{
printf("FizzBuzz");
}
else if (a % 3 == 0)
{
printf("Fizz");
}
else if (a % 5 == 0)
{
printf("Buzz");
}
else
{
printf("%d", a);
}
if (a != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
