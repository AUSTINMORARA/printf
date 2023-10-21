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

	spec s[] = {{"c", print_char}, {"s", print_str},
		{"r", print_rev_str}, {"u", print_unint},
		{"b", print_binary}, {"d", print_int},
		{"i", print_int}, {'\0', NULL}
	};

	int i, j, count;
	int sp_len;

	va_start(ap, format);

	i = 0, j = 0, count = 0;

	sp_len = sizeof(s) / sizeof(s[0]);
	sp_len -= 1;

	if (format == NULL)
		return (-1);

	while (*(format + i) != '\0')
	{
		j = 0;

		if (*(format + i) == '%')
		{
			i += 1;
			while (j < sp_len &&
			       format[i] != (s[j].c[0]))
					j++;

			if (*(format + i) == '\0')
				return (-1);
			else if (*(format + i) == '%')
			{
				_putchar('%');
				count += 1;
				i += 1;
			}
			else if (j < sp_len)
			{
				count += s[j].specfunc(ap);

				if (count == -1)
					return (-1);
				i += 1;
			}
			else
			{
				_putchar('%');
				_putchar(*(format + i));
				count += 1;
				i += 1;
			}
		}
		else
		{
			_putchar(*(format + i));
			count += 1;
			i += 1;
		}
	}

	va_end(ap);

	_putchar('\n');

	return (count);
}
