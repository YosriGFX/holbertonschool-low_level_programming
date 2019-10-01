#include "holberton.h"
/**
 * puts_half - print half string
 * @str: string;
 *
 */
void puts_half(char *str)
{
int a = 0, b, i;
while (str[a] != '\0')
a++;
i = a;
if (a % 2 != 0)
i++;
for (b = i / 2; b < a; b++)
_putchar(str[b]);
_putchar('\n');
}
