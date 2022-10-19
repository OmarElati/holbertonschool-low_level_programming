#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always (success)
 */
int main(void)
{
    char a, b;
    for (a = 'a'; a <= 'z'; a++)
    {
        putchar(a);
    }
    for (b = 'A'; b <= 'Z'; b++)
    {
        putchar(b);
    }
    putchar('\n');
    return (0);
}
