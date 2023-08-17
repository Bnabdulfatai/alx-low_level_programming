#include "main.h"
/**
 * print_last_digit - program prints the last digit of an integer
 * @n: the integer we want to print the last three digit
 * Return: The value of the x
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		n = -n;
	}
	x = n % 10;
	if (x < 0)
		x = -x;
	_putchar(x + '0');

	return (x);
}
