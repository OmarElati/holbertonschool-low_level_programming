#include "main.h"

/**
* reverse_array - function that reverses the content of an array of integers
*
* @a: input
* @n: input
*
* Return: void
*/

void reverse_array(int *a, int n)
{
int b = 0, tmp;
n = n - 1;
while (b < n)
{
tmp = a[b];
a[b] = a[n];
a[n] = tmp;
b++;
n--;
}
}
