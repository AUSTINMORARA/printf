#include "main.h"
#include <stdarg.h>

/**
 * _printf - printing function.
 * @format: specifies what is to be printed.
 * Return: number of characters printed.
 */

int _printf(const char *format, ...)
{
	va_list ap;

	int i, j, count;
	/*spec *s = malloc(sizeof(spec) + 2 *  sizeof(int));*/

	spec s[] = {
		{'c', print_char},
		{'s', print_str},
		{'\0', NULL}
		};

	va_start(ap, format);

	i = 0;
	j = 0;
	count = 0;
	if (!format)
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			while (j < 2)
			{
				if (format[i + 1] == s[j].c)
				{
					count = s[j].specfunc(ap, count);
				}
				j++;
			}
		}
	_putchar(format[i]);
	i++;
	count++;
	}

	va_end(ap);

	_putchar('\n');

	return (count);
}
