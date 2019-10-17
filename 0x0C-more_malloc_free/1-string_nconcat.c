#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concat two strings.
 * @s1: first string
 * @s2: second string
 * @n: unsiged int
 * Return: Pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *m = "", *p = "";
unsigned int a = 0, b = 0, c = 0, d = 0;
if (s1 == NULL)
s1 = m;
if (s2 == NULL)
s2 = m;
while (s1[a] != '\0')
a++;
while (s2[d] != '\0')
d++;
if (d <= n)
n = d;
p = malloc(a + n);
if (p == NULL)
return (NULL);
while (b < a)
{
p[b] = s1[b];
b++;
}
while (c < n)
{
p[b] = s2[c];
c++;
b++;
}
p[b] = '\0';
return (p);
}
