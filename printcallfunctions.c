#include "main.h"
#include <stdio.h>
/**
 * printInt - prints an integer
 * @i: integer to print
 *
 * Return: number of chars and digits printed
 */
int printInt(va_list args)
{
	char oz[33];
	char *str;
	int num = va_arg(args, int);
	int size;
	str = itoa(num, oz, 10);
	size = _strlen(str);
	return (write(1, str, size));
}

/**
 * printChar - prints a character with _putchar to stdout.
 * @c: character to print
 *
 * Return: always 1
 */

int printChar(va_list args)
{
	char c = va_arg(args, int);
	return (write(1, &c, 1));
}

/**
 * printString - prints a string of characters
 * @s: string to print
 *
 * Return: number of characters printed
 */
int printString(va_list args)
{
	char *str = va_arg(args, char *);
	int size;

	if ((str = NULL))
		str = "(null)";
	size = _strlen(str);
	return (write(1, str, size));
}

/**
 * printPercent - percent
 * @args: passes args
 * Return: data length
 */
int printPercent(va_list args)
{
	char p = '%';
	(void) args;
	return (write(1, &p, 1));
}


/**
 * _strlen - count chars
 * @s: string
 * Return: length
 */
int _strlen(const char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;

	return (i);
}
