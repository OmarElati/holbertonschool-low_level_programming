#include "main.h"

/**
 * factorial - Function returns the factorial of a given number.
 *
 * @n: input.
 *
 * Return: 0 OR n.
 */

int factorial(int n)
{
	int a = n;

	if (n < 0)
	{
		return (-1);
	}
	else if ((n == 0) || (n == 1))
	{
		return (1);
	}
	else
	{
		a *= factorial(n - 1);
	}
	return (a);
}
