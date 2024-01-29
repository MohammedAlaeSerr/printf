#include "main.h"

/**
 * printf_s - Prints a string to stdout
 * @va: argument
 *
 * Return: the length of the string passed.
 */
int printf_s(va_list va)
{
	cher *str;
	int i, legth;

	str = va_arg(va, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}
