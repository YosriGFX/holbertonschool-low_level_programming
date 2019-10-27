#ifndef variadic_functions_h
#define variadic_functions_h
#include <stdarg.h>
/**
 * struct print - type with corresponding print function
 * @c: print type
 * @func: print function
 */
typedef struct print
{
char *c;
void (*func)(va_list);
} print_f;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
