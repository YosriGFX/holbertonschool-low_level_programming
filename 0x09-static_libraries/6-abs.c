#include "holberton.h"
/**
 * _abs - Get the abs value of number
 * @i: integer of input
 * Return: ||i||
 */
int _abs(int i)
{
if (i < 0)
i = (i * -1);
return (i);
}
