#include "holberton.h"
/**
 * print_number - function that prints an integer.
 * @n: integer
 * Return: integer printed
 */
void print_number(int n)
{
int k, d = 1, c = 1, a, i, count = 0;
if (n == 0)
_putchar('0');
if (n < 0)
{
n = -n;
_putchar('-');
}
i = n;
while (n / 10 != 0)
{
n /= 10;
c = c * 10;
count++;
}
_putchar((i / c) + '0');
for (a = 1; a <= count; a++)
{
d = c / 10;
k = i % c;
k /= d;
_putchar(k + '0');
c = c / 10;
}
}
