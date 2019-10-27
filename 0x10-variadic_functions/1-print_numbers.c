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
unsigned int a = 0;
va_list num;
va_start(num, n);
while (a < n)
{
printf("%d", va_arg(num, int));
if (a != n && separator)
printf("%s", separator);
a++;
}
printf("\n");
va_end(num);
}
