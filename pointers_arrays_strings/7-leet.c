#include "main.h"

/**
* cap_string - function capitalizes all words of a string
*
* @str: string
*
* Return: void
*/

char *cap_string(char *str)
{
int a, b;
char c[] = "aAeEoOtTlL";
char d[] = "4433007711";
for (a = 0; str[a]; a++)
{
for (b = 0; b <= 9; b++)
{
if (c[b] == str[a])
{
str[a] = d[b];
}
}
}
return (str);
}
