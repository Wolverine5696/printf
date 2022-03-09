#include "main.h"
/**
 * _printf - prints string of the characters
 * @format: specifier
 * Return value of print
 */
int printf(const char *format, ...)
{
         int k, j, = 0;
	unsigned int i;
	va_list razor;

	va_start(razor, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]), j++;
			continue;
		}
		if (format[i + 1] == '%')
		{
			_putchar('%'), j++, i++;
		continue;
		}
		if (format[i + 1] == '\0')
			return (-1);

			k = get_func (format[i + 1], razor);
			if (k == -1 || k != 0)
				i++;
			if (k > 0)
				j += k;
			if (k == 0)
			{_putchar('%'), j++; }		}
		va_end(razor);
		return(j);
}		
