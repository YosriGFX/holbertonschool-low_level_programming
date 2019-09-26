#include "holberton.h"
/**
 * print_number - function that prints an integer.
 * 
 * Return: integer printed
 */
void print_number(int n)
{
int d = 1, c = 1, a, i, count = 0;
if (n == 0)
_putchar('0');
if (n < 0)
{
n = n * -1;
_putchar('-');
}
i = n;
while(n != 0)
{
n /= 10;
++count;
}
for (a = 1; a <= count; a++)
c = c * 10;
for (a = 1; a <= count; a++)
{
d = c / 10;
_putchar(((i % c) / d) + '0');
c = c / 10;
}
}
