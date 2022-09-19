#include "main.h"

/**
 * puts_half - prints every other character of a string
 * @str: A pointer to an int that will be changed
 *
 * Return: void which means our answer is correct
 */

void puts_half(char *str)
{
	int index = 0, len = 0, n;


	while (str[index++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;


	else
		n = (len + 1) / 2;


	for (index = n; index < len; index++)

		_putchar(str[index]);

	_putchar('\n');
}
