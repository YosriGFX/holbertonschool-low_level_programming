#include "holberton.h"
/**
 * get_bit - returns the value of a bit
 * @n: int
 * @index: unsigned int
 * Return: int or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int a;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
a = (1 << index);
if (a == (n & a))
return (1);
return (0);
}

