#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: void pointer
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *a, *b;
unsigned int n = 0;
if (new_size == old_size)
return (ptr);
if (ptr != NULL && new_size == 0)
{
free(ptr);
return (NULL);
}
a = malloc(new_size);
if (!a)
return (NULL);
b = ptr;
if (ptr != NULL)
{
while (n < old_size)
{
a[n] = b[n];
n++;
}
}
free(ptr);
return (a);
}
