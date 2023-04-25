#include "main.h"

/**
 * _octal - Converts an integer to an octal number and prints it to stdout.
 * @args: A variable argument list containing the integer to convert.
 * Return: The number of characters printed to stdout.
**/
int _octal(va_list args)
{
	unsigned long int n = va_arg(args, unsigned long int);
	char arr[200];
	int i = 0;
	int j;

	while (n > 0)
	{
		int tmp = 0;

		tmp = n % 8;
		if (tmp < 10)
		{
			arr[i] = tmp + '0';
			i++;
		}
		else
		{
			arr[i] = tmp + 94;
			i++;
		}
		n /= 8;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(arr[j--]);
	}
	return (i);
}
