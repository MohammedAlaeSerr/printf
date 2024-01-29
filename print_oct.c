#include "main.h"
/**
 * printf_oct - converts to octal
 * @va: argument to convert
 *
 * Return: number of digit (oct version)
 */
int printf_oct(va_list va)
{
	int i, count = 0;
	int *array;
	unsigned int mun = va_arg(va, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num = num / 8;
		count++;
	}
	count++;
	array = malloc(sizeof(int) * count);
	for (i = 0; i < count; i++)
	{
		array[i] = tem % 8;
		tem = tem / 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}
