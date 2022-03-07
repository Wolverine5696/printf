#include "main.h"
/**
 * _strlen - returns the legth of a string
 * @s: the string
 * Return: length of string
 */
int _strlen(char *s)
{
	int x;
	
	x = 0;

while (s[x] != '\0')
	x++;

return (x);
}
