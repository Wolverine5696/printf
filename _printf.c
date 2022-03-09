#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * specifier - looks for the format specifier
 * @format: possible format for the struct
 *
 * Return: valid or NULL pointer
 */
int (*specifier(const char *format))(va_list)
{
	unsigned int z;
	blue x[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_int},
		{NULL, NULL}
	};

	if (format != NULL)

	for (z = 0; x[z].red != NULL; z++)
	{
		if (*(x[z].red) == *format)
		{
			break;
		}
	}
	return (x[z].f);
}
/**
 * _printf - prints format of the string
 * @format: arguments in the string
 *
 * Return: prints arguments
 */
int _printf(const char *format, ...)    
{
	int length = 0; unsigned int z = 0;

	va_list razor;
	int (*f)(va_list);

	if (format == NULL || (format[0] == '%' &&format[1] == '\0'))
		return (-1);
	va_start(razor, format);
	while (format[z])
	{
		for (; format[z] != '%' && format[z]; z++)
			{
				_putchar(format[z]); length++;
			}
		if (!format[z])
			return (length);
	if (format[z + 1] == '%')
	{
		_putchar('%');
		z += 2; length = length + 1;
	}
	else if (format[z + 1] == '\0')
	{
		z++;
		continue;
	}
	else
	{
		f = specifier(&format[z + 1]);
	if (f == NULL)
	{
	_putchar(format[z]); _putchar(format[z + 1]);
	z += 2; length = length + 2;
	}
	else
	{
	length = length + f(razor); z += 2;
	}}
va_end(razor);
return (length);
}
}
