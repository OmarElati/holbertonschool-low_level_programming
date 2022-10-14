#include "main.h"

/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 *
 * @a: array
 * @size: size
 * 
 * Return: Empty
*/
void print_diagsums(int *a, int size)
{
int b, x = 0, y = 0;
for (b = 0; b < size; b++)
{
x += a[(size + 1) * b];
y += a[(size - 1) * (b + 1)];
}
_putchar(x);
_putchar(',');
_putchar(y);
}
