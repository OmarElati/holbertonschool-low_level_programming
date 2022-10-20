#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Print from 0 to 98
 * @n:int
 * Return: a number serie
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        while (n < 98)
        {
            printf("%d, ", n);
            n++;
        }
    }
    else
    {
        while (n > 98)
        {
            printf("%d, ", n);
            n--;
        }
    }
    printf("%d\n", n);
}
