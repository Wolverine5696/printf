#include "main.h"
/**
 * _putchar - writes character c to stdout
 * @c: the character
 * Return: zero is your hero.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
