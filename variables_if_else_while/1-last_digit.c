#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
char last[] = 'Last digit of';
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%s %d is ", last, n);
if (n % 10 > 5)
{
printf("%d and is greater than 5\n ", n % 10);
}
else if (n % 10 == 0)
{
printf("%d and is 0\n ", n % 10);
}
else
{
printf("%d and is less than 6 and not 0\n ", n % 10);
}
return (0);
}
