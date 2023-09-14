#ifndef VAR_H
#define VAR_H

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#include <stdarg.h>

/**
 * struct variadic_functions - struct
 * @op: option
 * @f: function
 * Description: print any thing fot function print all
 */
typedef struct variadic_functions
{
	char *op;
	void (*f)(char *, va_list);
} item;

#endif
