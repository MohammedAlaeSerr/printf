#include "main.h"

/**
 * printf_rot - convert to rot 13
 * @va: arguments
 * Return: counter
 */
int printf_rot(va_list va)
{
	int i, j, counter = 0;
	int k = 0;
	char *s = va_arg(va, char *);
	char al[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char bl[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; al[j] && !k; j++)
		{
			if (s[i] == al[j])
			{
				_putchar(bl[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}
