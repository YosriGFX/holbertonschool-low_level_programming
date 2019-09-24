#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers.
 *
 * Return: 0 always.
 */
int main(void)
{
int a, b, c, d;
b = 1;
c = 0;
for (a = 0; a <= 50; a++)
{
d = c + b;
c = b;
b = d;
printf("%i", d);
if (a != 50)
printf(", ");
}
printf("\n");
return (0);
}
