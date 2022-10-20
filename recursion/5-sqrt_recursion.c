#include "main.h"

/**
 * _sqrt - Function returns the natural square root of a number.
 *
 * @n: input
 * @root: the root to be tested
 *
 * Return: -1 OR n.
 */
int _sqrt(int n, int root)
{
	if ((root * root) == n)
	{
		return (root);
	}
	if (root == n / 2)
	{
		return (-1);
	}
	return (_sqrt(n, root + 1));
}




/**
 * _sqrt_recursion - Function returns the natural square root of a number.
 *
 * @n: int.
 *
 * Return: -1 OR n.
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (1);
	}
	return (_sqrt(n, root));
}
