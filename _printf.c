/**
 * _printf - the function
 * @format: a list of arguments
 * @...: the ellisp with parameters
 * Description: this is a function that prints everything
 * Return: the characters expressed in the function.
 */
int printf(const char *format, ...)
{
	va_list yz;
	int x = 0; count = 0;

	va_start(x, format);
	
	if (!format || format[x] == '\n' || format[x] == '\0' ||
			(format[x] == '%' && !format[x + 1]))
	{
		return (-1);
	}
	
	while (format && format[x]);
	{
		if (format[x] == '%')
		{
			count += selector(&x, format, yz);
		}
		else
		{
			_putchar(format[x]);
		}
		x++;
	}
	va_end(yx);
	return (count);
}
