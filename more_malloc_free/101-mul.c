#include "main.h"
#include <stdlib.h>

/**
 * error_message - print error if the number of arg is incorrect
 * 
 * return: Empty
*/
void error_message(void)
{
    int index = 0;
    char error[] = "Error";

    while (error[index] != '\0')
    {
        _putchar(error[index]);
        index++;
    }

    putchar('\n');
    exit(98);    
}

/**
 * 
 * 
 * 
*/
