#include "main.h"

/**
 * print_int - Print a int
 *
 * @args: va_list like argument
 *
 * Return: The length of int
 */

int print_int(va_list args)
{
	int num = va_arg(args, int);
	int counter = 0;

	counter = count_digit(num);
	print_number(num);
	return (counter);
}

/**
 * print_number - helper function that loops through
 * an integer and prints all its digits
 * @n: integer to be printed
 */
void print_number(int n)
{
	unsigned int n1 = 0;

	if (n == -2147483648)
	{
		n1 = n;
		_putchar('-');
		n1 = -n1;

		if (n1 / 10)
			print_number(n1 / 10);
		_putchar('0' + (n1 % 10));
		return;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar('0' + (n % 10));
}

/**
 * count_digit - returns the number of digits in an integer
 * for _printf
 * @i: integer to evaluate
 * Return: number of digits
 */
int count_digit(int n)
{
	int counter = 0;

	if (n == 0)
		return (0);

	if (n < 0)
	{
		n *= -1;
		counter++;
	}

	while (n != 0)
	{
		n /= 10;
		counter++;
	}

	return (counter - 1);
}
