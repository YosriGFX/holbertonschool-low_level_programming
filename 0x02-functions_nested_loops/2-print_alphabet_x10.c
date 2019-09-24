#include "holberton.h"
/**
 * print_alphabet_x10 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int a;
char c;
for (a = 0; a <= 9 ; a++)
{
for (c = 'a'; c <= 'z'; c++)
_putchar(c);
_putchar('\n');
}
}
