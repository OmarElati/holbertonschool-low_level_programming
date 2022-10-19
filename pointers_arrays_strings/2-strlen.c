#include "main.h"

/**
 *_strlen - Using the strlen method to calculate the length of the string
 *@s: char
 *Return: Nthing
 */
int _strlen(char *s)
{
    int c;
    for (c = 0; *s != '\0'; s++)
    {
        c++;
    }
    return (c);
}
