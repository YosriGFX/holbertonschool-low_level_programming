#include "holberton.h"
/**
 * print_last_digit - get last digit
 * @i: integer
 * Return: Last digit of number
 */
int print_last_digit(int i)
{
if (i < 0)
i = (i * -1);
i = (i % 10);
_putchar(i + '0');
return (i);
}
