#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - function that print string
 * @separator: char
 * @n: string
 *
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int a = 0;
char *s;
va_list num;
va_start(num, n);
while (a < n)
{
s = va_arg(num, char*);
if (!s)
s = "(nil)";
printf("%s", s);
if (a != n - 1 && separator)
printf("%s", separator);
a++;
}
printf("\n");
va_end(num);
}
