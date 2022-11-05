#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 *
 * @separator: char * string print between num
 * @n: const unsigned int
 *
 * Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{

		s = va_arg(list, char *);

		if (s != NULL)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
