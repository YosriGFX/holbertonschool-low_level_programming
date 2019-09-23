#include "holberton.h"
/**
 * main - Entry point
 * _Putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
int a;
char holberton[] = "Holberton";
for (a = 0; a <= 9; a++)
{
_putchar(holberton[a]);
}
_putchar('\n');
return (0);
}
