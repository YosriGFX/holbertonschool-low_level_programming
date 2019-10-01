#include "holberton.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: string
 *
 */
void print_rev(char *s)
{
int a = 0;
while (*(s + a) != '\0')
a++;
while (a > 0)
{
a--;
_putchar(s[a]);
}
_putchar('\n');
}
