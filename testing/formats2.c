#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints the main string and the 2 integers
 *
 * @format: string with the named characters
 * Return: characters printed
 */

int _printf(const char *format, ...)
{
	int printed_list;
	razor_1 f_list[] = {
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};
	va_list backwards;

	if (format == NULL)
		return (-1);

	va_start(backwards, format);
	printed_list = parser(format, f_list, backwards);
	va_end(backwards);
	return (printed_list);
}
