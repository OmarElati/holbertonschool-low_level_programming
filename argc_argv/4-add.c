#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: Number of arg
 * @argv: arg of pointer
 * Return: 0 OR 1
 */
int main(int argc, char *argv[])
{
	int n = 0, m, y;

	for (m = 1; m < argc; m++)
	{
		for (y = 0; argv[m][y]; y++)
		{
			if (isdigit(argv[m][y]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (m = 1; m < argc; m++)
	{
		n += atoi(argv[m]);
	}
	printf("%d\n", n);
	return (0);
}
