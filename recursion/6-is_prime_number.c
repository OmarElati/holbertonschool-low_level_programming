#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - Function test for the prime number.
 *
 * @n: input.
 *
 * Return: 1 OR 0.
 */
int is_prime_number(int n)
{
	int i, b = 0, x;

	if (n > 1)
	{
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				x = 0;
				i = n;
			}
			b++;
		}

		b = b + 2;
		if (b == n)
		{

			x = 1;
		}
		return (x);
	}
	
	else
		return (0);
}
