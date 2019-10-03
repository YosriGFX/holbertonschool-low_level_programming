#include "holberton.h"
#include <stdio.h>
/**
* print_buffer - prints a buffer
* @b: buffer.
* @size: size of buffer.
* Return: no return.
*/
void print_buffer(char *b, int size)
{
int a, bb, l;

if (size <= 0)
printf("\n");
else
{
for (a = 0; a < size; a += 10)
{
printf("%.8x:", a);
for (bb = a; bb < a + 10; bb++)
{
if (bb % 2 == 0)
printf(" ");
if (bb < size)
printf("%.2x", *(b + bb));
else
printf("  ");
}
printf(" ");
for (l = a; l < a + 10; l++)
{
if (l >= size)
break;
if (*(b + l) < 32 || *(b + l) > 126)
printf("%c", '.');
else
printf("%c", *(b + l));
}
printf("\n");
}
}
}
