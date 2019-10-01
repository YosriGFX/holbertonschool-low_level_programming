#include "holberton.h"
/**
 * _puts - function that print a string
 * @str: String
 *
 */
void _puts(char *str)
{
while (*str)
{
_putchar(*str);
*str++;
}
_putchar('\n');
}
