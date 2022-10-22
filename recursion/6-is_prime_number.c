#include "main.h"

/**
 * check_prime - Function return 1 si num is prime
 *
 * @n: int
 * @x: int
 *
 * Return: 1 for prime OR 0 for comp
*/

int check_prime(int n, int x)
{

	if ((n <= 1) || (n % x == 0 && x > 1))
	{
		return (0);
	}
	else if ((n / x) < x)
	{
		return (1);
	}
	return (check_prime(n, x + 1));
}

/**
 * is_prime_number - retuen if number is prime
 *
 * @n: int
 *
 * Return: output
*/
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
