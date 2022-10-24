#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints multiplies two numbers
 * @argc: Number of command line
 * @argv: array
 * Return: 0 OR 1
 */
int main(int argc, char *argv[])
{
    int n, m, y;
	if (argc == 3)
    {
        n = atoi(argv[1]);
        m = atoi(argv[2]);
        y = n * m;
        printf("%d\n", y);
    }
    else
	{
		printf("Error\n");
        return (1);
	}
	return (0);
}
