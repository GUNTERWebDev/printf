#include "main.h"
/**
 * _hexa - Converts an integer to a hexadecimal number and prints it to stdout.
 * @args: A variable argument list containing the integer to convert.
 * Return: The number of characters printed to stdout.
**/
int _hexa(va_list args)
{
	unsigned int n = va_arg(args, int);
	char arr[100];
	int i = 0;
	int j;

	if (n == 0)
	{
		_putchar('0');
		i++;
	}
	while (n != 0)
	{
		int tmp = 0;

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
	{
		_putchar(arr[j--]);
	}
	return (i);
}
