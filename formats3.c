#include "main.h"
/**
 * functio_n - gets the function
 * @red: format
 * @plist: next
 * Return: function that prints the function
 */
int functio_n(char red, va_list plist)
{
	int i;
	char array[5] = {c, s, %, d, i };

	for (i = 0; i < 5; i++)
	{
		if (red == array[i])
		{
			switch (red)
			{
			case 'c':
				return (_putchar('c'));
			case 's':
				return (_putchar('s'));
			case '%':
				return (_putchar('%'));
			case 'd':
				return (_putchar('d'));
			case 'i':
				return (_putchar('i'));	
			}
		}
	}

	return (0);
}
