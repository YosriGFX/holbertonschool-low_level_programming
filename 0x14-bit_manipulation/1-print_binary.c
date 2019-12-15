#include "holberton.h"
/**
 * _pow - calculates a ^ b
 * @a: base
 * @b: power
 * Return: int
 */
unsigned long int _pow(unsigned int a, unsigned int b)
{
unsigned long int rez;
unsigned int c;
rez = 1;
for (c = 1; c <= b; c++)
rez *= a;
return (rez);
}
/**
 * print_binary - prints a number in binary notation
 * @n: int
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int d;
char f = 0;
d = _pow(2, sizeof(unsigned long int) * 8 - 1);
while (d != 0)
{
if ((n & d) == d)
{
f = 1;
_putchar('1');
}
else if (f == 1 || d == 1)
_putchar('0');
d >>= 1;
}
}

