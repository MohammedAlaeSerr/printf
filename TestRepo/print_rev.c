#include "main.h"

/**
 * printf_rev - printrs a str in reverse
 * @va: argfument
 *
 * Return: the lenght of  string printed
 */
int printf_rev(va_list va)
{
	char *str = va_arg(va, char *);
	int i;
	int j = 0;

	if (str == NULL)
		str = "(null)";
	while (str[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(str[i]);
	return (j);
}
