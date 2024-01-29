#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @fun: type pointer to function for the conversion specifier
 */

typedef struct format
{
	char *id;
	int (*fun)();
} convert_match;

int _putchar(char c);
int _strlen(char *str);
int _strlen_c(const char *str);
int printf_HEX(unsigned int num);

/*_printf function*/
int _printf(const char *format, ...);

/*Task 0*/
int print_c(va_list  va);
int printf_s(va_list va);
int print_37(void);

/*Task 1*/
int printf_int(va_list va);
int printf_dec(va_list va);

/*Task 2*/
int printf_bin(va_list va);

/*Task 3*/
int printf_unsigned(va_list args);
int printf_oct(va_list va);
int printf_hex(va_list va);
int printf_hex_extra(va_list va);

/*Task 5*/
int printf_string(va_list va);

/*Task 6*/
int printf_pointer(va_list va);
#endif
