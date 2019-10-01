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
putchar(*str);
*str++;
}
putchar('\n');
}
