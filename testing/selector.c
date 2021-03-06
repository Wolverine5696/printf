#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
/**
 * selector - main function
 * @i: the pointer
 * @...: parameters
 * @format: paramater format
 * @x: vaiable
 * Description: This function selects the function to solve the problem when called by the test file(s)
 * Return: all the characters that were called on during the test and compilation of the program.
 */
int selector(int *i, const char *format, va_list x)
{
int count = 0;
int y = *i, z = 0;

list_t str[] = {
	{"c", list_char},
	{"s", list_string},
	{"%", str_percent},
	{"d", str_num},
	{"i", str_num},
	{NULL, NULL}
};