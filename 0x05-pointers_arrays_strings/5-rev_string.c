#include "holberton.h"
/**
 * rev_string - reverse string
 * @s : string
 *
 */
void rev_string(char *s)
{
int a = 0, b = 0;
char c;
while (s[a])
a++;
for (b = 0; b < a / 2; b++)
{
c = s[a - b - 1];
s[a - b - 1] = s[b];
s[b] = c;
}
}
