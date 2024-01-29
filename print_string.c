#include "main.h"

/**
 * printf_string - prints exlusive str
 * @va: argument
 * Return: number of xhar printed
 */
int printf_string(va_list va)
{
	char *s;
	int i, len = 0;
	int val;

	s = va_arg(va, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			val = s[i];
			if (val < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + printf_HEX(val);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
