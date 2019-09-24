#include "holberton.h"
/**
 * _islower - checks for a lowercase character
 *
 * @c: variable to check
 *
 * Return: 1 if c is lowercase
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
