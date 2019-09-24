#include <stdio.h>
/**
 * main - prints the sum of multipes
 * 
 * return: 0 always
 */
int main(void)
{
int a, b, c;
for (a = 0; a < 1024; a++)
{
if ((a % 3) == 0)
b += a;
if ((a % 5) == 0)
c += a;
}
printf("%i\n", b);
printf("%i\n", a);
return (0);
}
