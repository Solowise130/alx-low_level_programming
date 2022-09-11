#include <stdio.h>
/*
 * main - Prints the alphabetic in lower and upper case
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Return: Always (Success)
 */
int main(void)
{
	char c;
for (c = 'a'; c <= 'z'; c++)
{		
    putchar(c);
}
for (c = 'A'; c <= 'Z'; c++)
{   
    putchar(c);
}
    putchar('\n');
return (0);
}
