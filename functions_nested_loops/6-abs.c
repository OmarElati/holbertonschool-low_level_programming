#include "main.h"
/**
 * _abs - Entry point
 * @r: int
 * Return: Always
 */
int _abs(int r)
{
    if (r < 0)
    {
        r = r * (-1);
    }
    return (r);
}
