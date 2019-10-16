#include "holberton.h"
/**
 * _isalpha - checks for a lowercase character
 *
 * @c: variable to check
 *
 * Return: 1 if c is alpha
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
