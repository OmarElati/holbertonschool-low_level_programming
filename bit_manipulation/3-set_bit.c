#include "main.h"
/**
 * set_bit - set 1 bit by index
 * @n: adress of integer
 * @index: unsigned integer
 * Return: 1 OR -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
		return (-1);
	*n |= 1 << index;
	return (1);
}
