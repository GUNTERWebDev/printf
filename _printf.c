#include <unistd.h>
#include "main.h"
#include <stdarg.h>
/**
 * _printf - Write a function that produces output according to a format.
 * @format: a string containing zero or more format specifiers
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, num = 0;
	int (*printf_func)(va_list);
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					printf_func = &_printf_char;
					break;
				case 's':
					printf_func = &_printf_string;
					break;
				case 'd':
				case 'i':
					printf_func = &_printf_number;
					break;
				default:
					num++;
					continue;
			}
		num += printf_func(args);
		}
		else
		{
			_putchar(format[i]);
			num++;
		}
	}
	va_end(args);
	return (num);
}
