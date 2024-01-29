#include "main.h"
/**
 * printf_int - prints an integer
 * @va: argument
 *
 * Return: number of characters printed
 */
int printf_int(va_list va)
{
	int n = va_arg(va, int);
	int num, digit, last, exp, i;

	i = 1;
	n = n / 10;
	num = n;
	last = n % 10;
	exp = 1;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
