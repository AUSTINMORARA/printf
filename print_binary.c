#include "main.h"

/**
 * print_binary - convert number to binary.
 * @ap: number of argumants.
 * Return: count;
 */

int print_binary(va_list ap)
{
	int n, i, count = 0;
	char bin[65];
	int index = 0;

	n = va_arg(ap, int);
	if (n == 0)
	{
		_putchar('0');
		return (-1);
	}
	while (n > 0)
	{
		bin[index++] = (n % 2) ? '1' : '0';
		n /= 2;
	}
	bin[index] = '\0';
	for (i = index - 1; i >= 0; i--)
	{
		_putchar(bin[i]);
		count += 1;
	}
	return (count);
}
