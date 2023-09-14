#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - prints a char
 * @separator: separator
 * @ptr: pointer
 */
void print_char(char *separator, va_list ptr)
{
	printf("%s%c", separator, va_arg(ptr, int));
}

/**
 * print_int - prints an int
 * @separator: separator
 * @ptr: pointer
 */
void print_int(char *separator, va_list ptr)
{
	printf("%s%d", separator, va_arg(ptr, int));
}

/**
 * print_float - prints a float
 * @separator: separator
 * @ptr: pointer
 */
void print_float(char *separator, va_list ptr)
{
	printf("%s%f", separator, va_arg(ptr, double));
}

/**
 * print_string - prints a string
 * @separator: separator
 * @ptr: pointer
 */
void print_string(char *separator, va_list ptr)
{
	char *str = va_arg(ptr, char *);

	switch (str != NULL)
	{
		case 0:
			printf("%s(nil)", separator);
			break;
		case 1:
			printf("%s%s", separator, str);
			break;
	}
}

/**
 * print_all - function that prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int i, j, num_items;
	va_list ptr;
	char *separator = "";
	item items[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ptr, format);

	i = 0;
	num_items = sizeof(items) / sizeof(items[0]);

	while (format[i])
	{
		j = 0;

		while (j < num_items)
		{
			if (format[i] == items[j].op[0])
			{
				items[j].f(separator, ptr);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
