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
int _putchar(char c); /*stdout*/

/*character functions*/
int print_char(va_list c);
int print_string(va_list s);
int print_cent(void); /* print_% */

int print_int(va_list n); /*print integers*/

int _strlen(char *s);
int _strcmp(char s1, char *s2);
int _prnthex(va_list *args);

int print_rot13(va_list a);
int print_binary(va_list a);
int print_float(va_list a);

void rev_string(char *s)
int _pow(int x, int y);
void rev_string(char *s);
int (*get_op_func(char s))(va_list);
#endif
