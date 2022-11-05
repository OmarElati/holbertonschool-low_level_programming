#include "3-calc.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - ..
 * @s: ..
 * Return: ..
*/
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

    while (ops[i].op != NULL)
    {
        if (!strcmp(s,ops[i].op))
        {
            return (ops[i].f);
        }
        i++;
    }
    return (NULL);
}
