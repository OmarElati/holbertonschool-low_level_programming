#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int _putchar(char c);

/**
* struct op - struct op
*
* @op: ..
* @f: ..
*/

typedef struct op
{
		char *op;
		void (*f)(va_list);
} op_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
