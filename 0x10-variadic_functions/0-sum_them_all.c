#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that return sum
 * @n: unsigned int
 * @...: int
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int a = 0;
int t = 0;
va_list s;
va_start(s, n);
while (a < n)
{
t += va_arg(s, int);
a++;
}
va_end(s);
return (t);
}
