#include "holberton.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
int a, i, f;
if (size <= 0)
_putchar('\n');
for (a = 0; a < size; a++)
{
for (i = 0; i < (size - (a + 1)); i++)
_putchar(' ');
for (f = 0; f < (a + 1); f++)
_putchar('#');
_putchar('\n');
}
}
