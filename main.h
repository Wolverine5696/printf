#ifndef PRINT_F _MAIN_H_
#define PRINT_F _MAIN_H_

#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct print - devines a structure for symbols and functions
 * @red: print struct
 * @f: the function
 * _putchar: prints a single character in a string/array
 * _int: prints integer
 * _percent: utilizes percent
 * print_int: print integers
 * print_char: print character
 * print_string: print string
*/

typedef struct print 
{
	char *red;
	int (*f)(va_list);
} blue;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list i);

/* printf function*/

int _printf(const char *format, ...);
int (*specifier(const char *format))(va_list);
int _putchar(char c); /*stdout*/
int functio_n(char red, va_list plist);

/*character functions*/
int _write_char(char);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int _char(va_list c);
int _string(va_list s);
int _percent(va_list list); /* print_% */
int _int(va_list arg); /*print integers*/

int _strcmp(char s1, char *s2);

#endif
