#include "holberton.h"
/**
 * times_table - a function that prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
int t, i, p;
for (i = 0; i <= 9; i++)
{
for (t = 0; t <= 9; t++)
{
p = (t * i);
if (p > 9)
{
_putchar(' ');
_putchar((p / 10) + '0');
_putchar((p % 10) + '0');
}
else if (t != 0)
{
_putchar(' ');
_putchar(' ');
_putchar(p + '0');
}
else
{
_putchar(p + '0');
}
if (t != 9)
_putchar(',');
}
_putchar('\n');
}
}

