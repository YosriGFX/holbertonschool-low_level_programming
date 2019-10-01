#include "holberton.c"
/**
 * rev_string - reverse string
 * @s : string
 *
 */
void rev_string(char *s)
{
int a = 0, b = 0;
char *c = s;
while (s[a])
a++;
while (b <= a / 2)
{
c = s[a - b - 1];
s[a - b - 1] = s[b];
s[b] = c;
b++;
}
