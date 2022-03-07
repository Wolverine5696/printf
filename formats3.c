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

	get_func[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{NULL, NULL}
	};

	for (i = 0; get_func[].mod != NULL; i++)
	{
		if (get_func[].mod[0] == next)
			return (get_func[].f(arg));
	}
	return (0);
}
