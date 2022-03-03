#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct specify - struct to specifiers, the token
 * @str: string of a special char
 * @f: function associated with the special char
 */
typedef struct list
{
	char *str
	int (*f)(va_list p);
} list_t;
/* printf function*/
int _printf(const char *format, ...);
int selector(int *i, const char *format, va_list x);

int _putchar(char c); /*stdout*/

/*character functions*/
int str_char(va_list c);
int str_string(va_list s);
int str_percent(va_list __attribute__((unused)) p); /* print_% */
int str_num(va_list arg); /*print integers*/

int _strlen(char *s);
int _strcmp(char s1, char *s2);
int _prnthex(va_list *args);

/* a few thoughts on the advanced tasks */
int rot13(va_list a);
int str_binary(va_list a);
int str_float(va_list a);
int str_unassigned(va_list arg);
int str_octal(va_list p);
int rev_string(va_list p);
int _pow(int x, int y);
void rev_string(char *s);
/* ??? */
int (*get_op_func(char s))(va_list);
#endif
