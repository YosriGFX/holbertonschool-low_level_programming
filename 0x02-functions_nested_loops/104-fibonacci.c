#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers.
 *
 * Return: 0 always.
 */
int main(void)
{
unsigned long int a, b, c, d;
b = 1;
c = 0;
for (a = 0; a < 98; a++)
{
d = c + b;
c = b;
b = d;
printf("%lu", d);
if (a != 97)
printf(", ");
}
printf("\n");
return (0);
}
