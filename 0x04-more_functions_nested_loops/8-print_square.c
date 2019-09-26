#include "holberton.h"
/**
 * print_square - function that prints a square, followed by a new line.
 * @size: is the size of the square
 * Return: void
 */
void print_square(int size)
{
int a, i;
if (size <= 0)
_putchar('\n');
for (a = 0; a < size; a++)
{
for (i = 0; i < size; i++)
_putchar('#');
_putchar('\n');
}
}
