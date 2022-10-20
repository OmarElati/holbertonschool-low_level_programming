#include "main.h"

/**
 * _sqrt - Function returns the natural square root of a number.
 * 
 * @num: input
 * @root: the root to be tested
 * 
 * Return: If n does not have a natural square root, the function should return -1.
 *         If n has a natural square root of n.         
 */
int _sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	if (root == num / 2)
	{
		return (-1);
	}
	return (_sqrt(num, root + 1));
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
