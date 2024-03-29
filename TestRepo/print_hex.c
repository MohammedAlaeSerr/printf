#include "main.h"

/**
 * printf_hex - prints an hexgecimal number.
 * @va: arguments.
 * Return: counter.
 */
int printf_hex(va_list va)
{
	int i;
	int *array;
	int count = 0;
	unsigned int num = va_arg(va, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		array[i] = tem % 16;
		tem /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}
