#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers.
 *
 * Return: 0 always.
 */
int main(void)
{
unsigned long int a, b, c, d, e;
b = 1;
c = 0;
e = 0;
{
for (a = 0; a < 34; a++)
{
d = c + b;
c = b;
b = d;
if ((b % 2) == 0)
e += b;
}
printf("%lu\n", e);
}
return (0);
}
