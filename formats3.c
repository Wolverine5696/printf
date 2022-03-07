#include "main.h"
/**
 * get_func - gets the function
 * @arg: format
 * @next: next
 * Return: function that prints the function
 */
int get_func(char next, va_list arg)
{
	int i;

	flag functs[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};

	for (i = 0; list[i].mod != NULL; i++)
	{
		if (list[i].mod[0] == next)
			return (list[i].f(arg));
	}
	return (0);
}
