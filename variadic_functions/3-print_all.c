#include "variadic_functions.h"
#include <stdio.h>

void _print_ch(va_list a);
void _print_in(va_list a);
void _print_fl(va_list a);
void _print_st(va_list a);

/**
 * print_all - function that print anything
 *
 * @format: string
 *
 * Return: void
*/
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i = 0, j = 0;
	char *seperator = "";
	op_t o[] = {
		{ "c", _print_ch },
		{ "i", _print_in },
		{ "f", _print_fl },
		{ "s", _print_st },
		{ NULL, NULL }
	};

	va_start(list, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (o[j].op != NULL)
		{
			if (format[i] == o[j].op[0])
			{
				printf("%s", seperator);
				o[j].f(list);
				seperator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(list);
	printf("\n");
}

/**
 * _print_c - fills memory with a constant byte
 * @a: is string
 * Return: nothing
*/

void _print_ch(va_list a)
{
	printf("%c", va_arg(a, int));
}

/**
 * _print_i - fills memory with a constant byte
 * @a: is string
 * Return: nothing
*/

void _print_in(va_list a)
{
	printf ("%d", va_arg(a, int));
}

/**
 * _print_f - fills memory with a constant byte
 * @a: is string
 * Return: nothing
*/

void _print_fl(va_list a)
{
	printf("%f", va_arg(a, double));
}

/**
 * _print_st - fills memory with a constant byte
 * @a: is string
 * Return: nothing
*/

void _print_st(va_list a)
{
	char *x = va_arg(a, char *);
	if (x == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", x);
}
