#include "main.h"

/**
* leet - function that encodes a string into 1337
*
* @str: string
*
* Return: adress of string
*/

char *leet(char *)
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
