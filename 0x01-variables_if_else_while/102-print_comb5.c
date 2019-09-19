#include <stdio.h>
/**
 * main - Entry point
 * print_alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int m;
int t;
int e;
for (n = 48; n <= 57; n++)
for (m = 48; m <= 57; m++)
for (t = 48; t <= 57; t++)
for (e = 48; e <= 57; e++)
if (m < e && n <= t)
if (m != e)
{
putchar(n);
putchar(m);
putchar(' ');
putchar(t);
putchar(e);
if (n != 57 || m != 56 || t != 57 || e != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
