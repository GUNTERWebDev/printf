#include "main.h"

/**
 * print_number - print a given number using _putchar
 * @n: number to be printed
 * Return: void
 */
int _number(int n)
{
	int len = 0;

	if (n == -2147483648)
	{
		_putchar('2');
		len += 1;
		len += _number(147483648);
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
		len =+ _number(n);
	}
	else if (n > 9)
	{
		len += _number(n / 10);
		len += _number(n % 10);
	}
	else
		 _putchar(n + '0');
	return (len);
}
