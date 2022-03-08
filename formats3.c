#include "main.h"
/**
 * get_func - gets the function
 * @arg: format
 * @next: next
 * Return: function that prints the function
 */
int functio_n(char red, va_list plist)
{
	int i;
	char array[3] = {c, s, % };

		functio_n[j] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	for (i = 0; functio_n[j].mod != NULL; i++)
	{
		if (functio_n[j].mod[0] == red)
			return (functio_n[j].f(plist));
	}
	return (0);
}
