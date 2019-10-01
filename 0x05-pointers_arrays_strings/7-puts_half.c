#include "holberton.h"
/**
 * puts_half - print half string
 * @str: string;
 *
 */
void puts_half(char *str)
{
int a = 0, b, n;
while (str[a])
a++;
n = (a - 1) / 2;
for (b = a / 2; b < a; b++)
_putchar(str[b]);
if (a % 2 != 0)
_putchar(n + '0');
_putchar('\n');
}
