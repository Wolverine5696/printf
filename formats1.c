#include "main.h"

/**
 * main - prints out characters in a format string
 * @c: prints character
 * @s: prints string
 * @%: prints percent
 * @d: prints d integer
 * @i: prints i integer
 * _printf - prints the main string and the all the integers
 *
 * @format: string with the named characters
 * Return: characters printed
 */
int _printf(const char *format, ...)
{
	int printall;
	razor_1 f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};
	va_list blue;

	if (format == NULL)
		return (-1);

	va_start(blue, format);
	printall = parser(format, f_list, blue);
	va_end(blue);
	return (printall);
}
