#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int f;
char c;
for (f = 0; f <= 9; f++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar (c);
}
_putchar ('\n');
}
}
