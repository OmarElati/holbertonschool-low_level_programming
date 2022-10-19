#include "main.h"
/**
 *_atoi - convert a string to an integer
 *
 *@s: string
 *
 *Return: intger
 */
int _atoi(char *s)
{
    int sign = 1;
    unsigned int num = 0;
    do
    {
        if (*s == 45)
        {
            sign *= -1;
        }
        if (*s >= '0' && *s <= '9')
        {
            num = (num * 10) + (*s - '0');
        }
        else if (num > 0)
        {
            break;
        }
    } while (*s++);
    return (num * sign);
}
