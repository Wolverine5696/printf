#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "printcallfunctions.c"

/**
 * _printf - prints format of the string
 * @format: arguments in the string
 *
 * Return: prints arguments
 */
	int printChar(va_list args);
	int printString(va_list args);
	int printPercent(va_list args);
	int printInt(va_list args);
	
	int _printf(const char *format, ...)
	{
	unsigned int i;
	int all = 0;
	va_list args;
	blue types[] = {
		{"c", printChar},
		{"s", printString},
		{"i", printInt},
		{"d", printInt},
		{NULL, NULL}
	
	};

	int na = 1;
	if (format == NULL || (*format == '%' && *(format + 1) == '\0'))
		return (-1);
	va_start(args, format);
	while (format != NULL && *format != '\0')
	{
		if (*format == '%')
		{
			format++;
		for (i = 0; types[i].red != NULL; i++)
		{
			if (*format == *(types[i].red))
			{
			all += types[i].f(args);
			format++;
			na = 0;
			break;
			}
		}
		if (na)
		all += write(1, format++, 1);
		}
		else
		{
			all += write(1, format++, 1);
		}
	}
	va_end(args);
	return(all);
	}

