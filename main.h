#ifndef _PRINTF_H
#define _PRINTF_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct function - structure
 * @name: char
 * @age: float
 * @owner: char
 */
struct printf
{
        char 
        float 
        double 
};
/**
 * function printf - Type definition for struct printf
 */
typedef struct printf;
int _printf(const char *format, ...);
int _putchar(char c);
#endif
