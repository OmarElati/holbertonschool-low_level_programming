#include "main.h"

/**
 * cap_string - function capitalizes all words of a string
 *
 * @str: string
 *
 * Return: void
 */

char *cap_string(char *str)
{
    int a = 0, b;
    char c[] = " \t\n,;.!?\"(){}";
    while (str[a])
    {
        if (str[a] >= 'a' && str[a] <= 'z')
        {
            if (a == 0)
            {
                str[a] -= 'a' - 'A';
            }
            else
            {
                for (b = 0; b <= 12; b++)
                {
                    if (c[b] == *(str + a - 1))
                    {
                        str[a] -= 'a' - 'A';
                    }
                }
            }
        }
        a++;
    }
    return (str);
}
