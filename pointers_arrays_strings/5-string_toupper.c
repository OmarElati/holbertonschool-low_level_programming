#include "main.h"

/**
 * string_toupper - function changes all lowercase letters of uppercase
 *
 * @str: string
 *
 * Return: void
 */

char *string_toupper(char *str)
{
    int a = 0;
    while (str[a])
    {
        if (str[a] >= 'a' && str[a] <= 'z')
        {
            str[a] -= 'a' - 'A';
        }
        a++;
    }
    return (str);
}
