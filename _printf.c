#include "main.h"
#include <sdarg.h>
#include <stddef.h>
#include <unistd.h>
/**
 * _printf - the function
 * @format: a list of arguments
 * @...: the ellisp with parameters
 * Description: this is a function that prints everything
 * Return: the characters expressed in the function.
 */
int _printf(const char *format, ...)
{
	int chars;
	va_list list; 

	va_start(list, format);
	if (format == NULL)
		return (-1);

	chars = charsFormats(list, format);

	va_end(list);
	return (chars);

	{
	 int i, j, charo, r_val
	
	specifier f_list[] = {
		{"c", _char},
		{"s", _string},
		{"%", _percent},
		{"d", _integer},
		{"i", _integer}
	};
	chars = 0;
	for (i = 0; format[i] != '\0'; i++ )
	{
	if (format[i] == '%' )
	{
		for (j = 0; f_list[j].sym != NULL; j++)
		{
	r_val = f_list[j].f(args);
	if (r_val == -1)
	return(-1);
	charo += r_val;
	break;
		}
	}
}
