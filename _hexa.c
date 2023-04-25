#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _hexa - Converts an integer to a hexadecimal number.
 * @args: A variable argument list containing the integer to convert.
 * Return: The number of characters printed to stdout.
**/
int _hexa(va_list args)
{
	unsigned int n = va_arg(args, unsigned long int);
	char arr[1024];
	int i = 0;
	int j;
	unsigned int tmp;

	if (n == 0)
	{
		return (_putchar('0'));
	}
	while (n != 0)
	{
		tmp = 0;
		tmp = n % 16;
		if (tmp < 10)
		{
			arr[i] = tmp + '0';
			i++;
		}
		else
		{
			arr[i] = tmp + 87;
			i++;
		}
		n /= 16;
	}
	j = i - 1;
	while (j >= 0)
		_putchar(arr[j--]);
	return (i);
}
