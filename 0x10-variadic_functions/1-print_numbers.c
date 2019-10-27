#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that print nubers
 * @separator: char
 * @n: int
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int a = 0, s = 0;
va_list num;
va_start(num, n);
while (a < n)
{
printf("%i", va_arg(num, int));
a++;
if (a != n)
while (separator[s] != '\0')
{
printf("%c", separator[s]);
s++;
}
else
printf("\n");
s = 0;
}
va_end(num);
}
