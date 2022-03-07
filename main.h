#ifndef PRINT_F
#define PRINT_F
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct ranger - defines a structure for symbols and functions
 * @sym: The operator
 * @f: The function associated
 */
<<<<<<< HEAD
typedef struct razor razor1;
=======

struct ranger
>>>>>>> 73e63cb2225439966340330088f2e4b56e0c9819
{
	char *sym;
	int (*f)(va_list);
};
<<<<<<< HEAD

=======
typedef struct ranger range_r;
/**
 * struct razor - devines a structure for symbols and functions
 * @sym: the oporator
 * @f: the function
 * _putchar: prints a single character in a string/array
 * _int: prints integer
 * _percent: utilizes percent
 */

typedef struct razor
{
	char *sym;
	int (*f)(va_list);
} razor_1;


>>>>>>> 73e63cb2225439966340330088f2e4b56e0c9819
/* printf function*/
int parser(const char *format, razor1 f_list[], va_list blue);
int _printf(const char *format, ...);
int charsFormats(const char *format, va_list);
int _strlen(char *s);
int _putchar(char c); /*stdout*/

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
int _prnthex(va_list *args);

#endif
