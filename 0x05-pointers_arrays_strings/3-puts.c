#include "holberton.h"
/**
 * _puts - function that print a string
 * @str: String
 *
 */
void _puts(char *str)
{
int a = 0;
while (*(str + a) != '\0')
{
_putchar(str[a]);
a++;
}
_putchar('\n');
}
