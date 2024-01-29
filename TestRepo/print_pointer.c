#include "main.h"

/**
 * printf_pointer - prints pointer
 * @va: argument
 *Return: integer
 */
int printf_pointer(va_list va)
{
	void *p;
	char *str = "(nil)";
	int i, hex_val;
	long int value;

	p = va_arg(va, void *);
	if (p == NULL)
	{
		for (i = 0, str[i] != '\0'; i++)
			_putchar(str[i]);
		return (i);
	}
	value = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	hex_val = printf_HEX_extra(value);
	return (b + 2);
}
