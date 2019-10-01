#include "holberton.h"
/**
 * puts2 - Print every other char of string
 * @str: String
 *
 */
void puts2(char *str)
{
int a = 0, b;
while (str[a])
a++;
for (b = 0; b <= a; b += 2)
_putchar(str[b]);
_putchar('\n');
}
