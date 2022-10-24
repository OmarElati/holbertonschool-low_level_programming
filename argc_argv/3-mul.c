#include <stdio.h>
/**
 * main - prints multiplies two numbers
 * @argc: Number of command line
 * @argv: array
 * Return: 0 OR 1
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
    {
        printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
    }
    else
	{
		printf("Error\n");
        return (1);
	}
	return (0);
}
