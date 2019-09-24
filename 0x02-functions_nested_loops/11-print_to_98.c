#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 9
 * @n: integer
 * Return: from n to 98
 */
void print_to_98(int n)
{
while (n != 98)
{
if (n > 98)
{
printf("%i, ", n);
n--;
}
else
{
printf("%i, ", n);
n++;
}
}
if (n == 98)
printf("%i\n", n);
}
