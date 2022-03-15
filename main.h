#ifndef PRINT_F 
#define PRINT_F 

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
int _strlen(const char *s);
char *_strcpy(char *dest, char *src);
void rev_string(char *s);
int _abs(int n);
char *itoa(int value, char *buffer, int base);
#endif
