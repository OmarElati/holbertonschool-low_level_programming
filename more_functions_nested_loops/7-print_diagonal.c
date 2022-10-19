#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: int
 * Return: 0
 */

void print_diagonal(int n)
{
    int a, o;
    if (n <= 0)
    {
        _putchar('\n');
    }
    else
    {
        for (a = 0; a < n; a++)
        {
            for (o = 0; o < a; o++)
            {
                _putchar(32);
            }
            _putchar(92);
            _putchar('\n');
        }
    }
}
