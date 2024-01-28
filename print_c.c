#include "main.h"

/**
 * printf_c - prints a char
 * @va: An argument
 *
 * Return: One
 */
int printf_c(va_list  va)

{
	char str;

	str = va_arg(va, int);
	_putchar(str);
	return (1);
}
