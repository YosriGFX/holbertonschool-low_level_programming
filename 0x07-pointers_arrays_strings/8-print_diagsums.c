#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int c = 0, sc = 0, sr = 0;
for (; c < size; c++)
{
sc += *(a + c * size + c);
sr += *(a + (c * size) + (size - 1 - c));
}
printf("%c, %c\n", sc, sr);
}
