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
int printf(const char *format, ...)
{
	int x;
	va_list yz; 

	va_start(x, format);
	
	x = charsformats(format, yz);
	{
	
		int i, j, charo, r_val
	fmtsspecifier f_list[] = {
		{"c", _char},
		{"s", _string},
		{"%", _percent},
		{"d", _integer},
		{"i", _integer}
	};
	chars = 0;
	for (i = 0; format[i] != '\0'; i++ )
	{
	if (format[i] -- '%' )
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
