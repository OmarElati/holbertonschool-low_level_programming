#include "main.h"

/**
 * _sqrt_recursion - Function returns the natural square root of a number.
 *
 * @n: int.
 *
 * Return: -1 OR x.
 */

int _sqrt_recursion(int n)
{
	int x;

	if (n < 0)
	{
		return (-1);
	}
    
	else
	{
		x = _sqrt_recursion(n);
	}
	return (x);
}
