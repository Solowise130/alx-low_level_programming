#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * power_operation - returns the natural square root of a number.
 * @n: number to be used
 *
 * Return: the square root of n
 */

int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: test number
 * @x: squared number
 *
 * Return: return the square root of n
 */

int _sqrt(int n, int x)
{
	if (n > x /2)
		return (-1);
	else

	if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x))
}
