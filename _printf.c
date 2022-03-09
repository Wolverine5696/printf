#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * specschker - looks for the format specifier
 * @format: specschk
 *
 * Return: valid or NULL pointer
 */
int (*specschker(const char *format))(va_list)
{
	unsigned int z;
	specschk x[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_int},
		{NULL, NULL}
	};

	if (!format)
		exit(99);
	for (z = 0; x[z].spec != NULL; z++)
	{
		if (*(x[z].spec) == *format)
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
	len = 0, unsigned int k = 0;

	va_list razor;
	int (*f)(va_list);

	if (format == NULL || (format[0] == % &&format[1] == '\0'))
		return (-1);
	va start(razor, format);
	while (format[k])
	{
		for (; format[k] != '%' && format[k]; k++)
			{
			_putchar(format[k]), len++;
			}
		if (!format[k])
			return (len);
	if (format[k + 1] == '%')
	{
		_putchar('%');
		k += 2, len = len + 1;
	}
	else if (format[k + 1] == '\0')
	{
		k++;
		continue;
	}
	else
	{
		m = specifier(&format[k + 1]);
	if (m == NULL)
	{
	_putchar(format[k]), _putchar(format[k + 1]);
	k += 2, len = len + 2;
	}
	else
	}
	len = len + m(razor), k += 2;
	}}}
va_end(razor);
return (len);
}
