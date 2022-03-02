#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct specify - struct to specifiers
 * @str: string of a special char
 * @func: function associated with the special char
 */
typedef struct specify
{
	char *str
	int (*func)(va_list);
} string;
/* printf function*/
int _printf(const char *format, ...);
int _putchar(char c);

/* specifiers */
int print_c
int print_s
int print_d
int print_i


#endif
