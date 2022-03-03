#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
/**
 * struct list- struct to specifiers, the token
 * @op: string of a special char
 * @f: function of special char
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

#endif
