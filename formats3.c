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
	int array[2] = {d, i};
	char array[3] = {c, s, % };

		get_func[j] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{NULL, NULL}
	};

	for (i = 0; get_func[j].mod != NULL; i++)
	{
		if (get_func[j].mod[0] == next)
			return (get_func[j].f(arg));
	}
	return (0);
}
