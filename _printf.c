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
	va_list args;

	va_start(args, format);
	for (i = ; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				char c = va_arg(args, int);

				_putchar(c);
				num++;
			}
			else if (format[i] == 's')
			{
				char *s = va_arg(args, char *);

				if (s == NULL) 
					s = "(null)";
				while (*s)
				{
					_putchar(*s++);
					num++;
				}
			}
			else if (format[i] == 'd' || format[i] == 'i')
			{
				int n = va_arg(args, int);

				_print_number(n);
			}
			else if (format[i] == '%')
			{
				_putchar('%');
				num++;
			}
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
