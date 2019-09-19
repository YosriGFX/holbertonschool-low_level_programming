#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Last digits
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
int m;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
printf("Last digit of %i is %i and is ", n, m);
if (m > 5)
printf("greater than 5\n");
if (m == 0)
printf("0\n");
if (m < 6)
if (m != 0)
printf("less than 6 and not 0\n");
return (0);
}
