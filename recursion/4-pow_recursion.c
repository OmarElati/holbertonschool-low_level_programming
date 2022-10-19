#include "main.h"

/**
 * _pow_recursion - Function returns the value of x raised to the power of y.
 *
 *@x: int
 *@y: int
 *
 * Return: -1 OR x
 */

int _pow_recursion(int x, int y)
{
	int a = x;

	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		a *= _pow_recursion(x, y - 1);
	}
	return (a);
}
