#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * struct specifier - hold specifier and its function.
 * @c: character specifier
 * @spec: specifier function pointer.
 * @va_list: variable list containing arguments.
 * @count: returns number of characters printed.
 *
 * Description: Holds the format specifier.
 */

typedef struct specifier
{
	char c;
	int (*specfunc)(va_list, int count);
} spec;


int _putchar(char c);
int print_char(va_list ap, int count);
int print_str(va_list ap, int count);
int _printf(const char *format, ...);

#endif
