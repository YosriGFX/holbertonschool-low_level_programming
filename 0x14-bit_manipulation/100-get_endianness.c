#include "holberton.h"
/**
 * get_endianness - check endianness
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
int a;
char *c;
a = 1;
c = (char *)&a;
return (*c);
}
