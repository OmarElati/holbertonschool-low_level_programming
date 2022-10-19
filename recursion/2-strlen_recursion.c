#include "main.h"

/**
 * _strlen_recursion - Function that returns the length of the string.
 *
 * @s: string.
 *
 * Return: 0 OR to Length
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count = _strlen_recursion(s + 1);
		count++;
	}
	return (count);
}
