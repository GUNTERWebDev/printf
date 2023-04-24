#include "main.h"
/**
 * _all - Calls the appropriate function to handle a format specifier
 *
 * @args: The arguments list for the format specifier
 * @format: The format specifier character to handle
 *
 * Return: The number of characters printed
 */
int _all(va_list args, char format)
{
	int num = 0;

	if (format == 'x')
	{
		num += _hexa(args);
	}
	if (format == 'u')
	{
		num += _uns(args);
	}
	return (num);
}
