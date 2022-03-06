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
typedef struct razor 
{
	char *sym;
	int (*f)(va_list);
} razor_1;

/* printf function*/
int _printf(const char *format, ...);
int charsFormats(const char *format, va_list args);
int _strlen(char *s);
int _putchar(char c); /*stdout*/

/*character functions*/
int _char(va_list c);
int _string(va_list s);
int _percent(va_list list); /* print_% */
int _int(va_list arg); /*print integers*/

int _strcmp(char s1, char *s2);
int _prnthex(va_list *args);

#endif
