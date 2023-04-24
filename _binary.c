#include "main.h"

/**
 * _binary - function that converts decimal to binary
 * @args: A va_list of arguments from printf
 * Return: The number of characters printed
**/

int _binary(va_list args)
{
	int n = va_arg(args, int);
	int bin[32], i, j, count = 0;

	i = 0;
	while (n > 0)
	{
		bin[i] = n % 2;
		n /= 2;
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(bin[j] + '0');
		j--;
		count++;
	}
	return (count);
}
