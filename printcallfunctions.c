#include "main.h"
#include <stdio.h>
/**
 * print_int - prints an integer
 * @i: integer to print
 *
 * Return: number of chars and digits printed
 */
int print_int(va_list i)
{
	int x = va_arg(i, int);
	unsigned int length = 0, modulo = 1;
	/*putchars a '-' for negative numbers*/

	if (x < 0)
	{
		_putchar('-');
		x = x * -1;
		length++;
	}
	/*printing 1 int at a time with putchar?*/

	while ((f / modulo) >= 10)
	{
		modulo = modulo * 10;
	}
	while (modulo >= 1)
	{
		_putchar((f / modulo) + '0');
		x = x % modulo;
		modulo = modulo / 10;
		length++;
	}
	return (length);
}

/**
 * print_char - prints a character with _putchar to stdout.
 * @c: character to print
 *
 * Return: always 1
 */

int print_char(va_list c)
{
	/* protect against null character */
	if (!c)
		exit(1);
	_putchar((char)va_arg(c, int));
	return (1);
}

/**
 * print_string - prints a string of characters
 * @s: string to print
 *
 * Return: number of characters printed
 */
int print_string(va_list s)
{
	int len;
	char *stx = va_arg(s, char *);

	if (stx == NULL)
		stx = "(null)";
	for (len = 0; stx[len]; len++)
	{
		_putchar(stx[len]);
	}
	return (len);
}
