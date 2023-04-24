#include "main.h"
/**
 * _allchar - Calls the appropriate function to handle a format specifier
 *
 * @args: The arguments list for the format specifier
 * @format: The format specifier character to handle
 *
 * Return: The number of characters printed
 */
int _allchar(va_list args, char format)
{
	int n = 0;

	if (format == 'c')
		n += _printf_char(args);
	if (format == 's')
		n += _printf_string(args);
	return (n);
}
