#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
		num = -num;
	}
		if (num > 9)
		{
			print_number(num / 10);
		}
		_putchar(num % 10 + '0');
}														
