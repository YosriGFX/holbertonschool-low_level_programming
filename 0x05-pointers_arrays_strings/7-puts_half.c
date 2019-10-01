#include "holberton.h"
/**
 * puts_half - print half string
 * @str: string;
 *
 */
void puts_half(char *str)
{
int a = 0, b;
while (str[a])
a++;
if (a % 2 != 0)
a++;
for (b = a / 2; b < a; b++)
_putchar(str[b]);
_putchar('\n');
}
