#include "main.h"

/**
 * print_string - loops through a string and prints
 * every character
 * @args: va_list arguments from _printf
 * Return: number of char printed
 */
int print_string(va_list args)
{
	char *argument = va_arg(args, char *);
	int i = 0;

	if (argument == NULL)
	{
		write(1, "(null)", 6);
		return (5);
	}

	while (argument[i])
	{
		_putchar(argument[i]);
		i++;
	}
	return (i);
}
/**
 * print_char - prints a character
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: number of char printed
 */
int print_char(va_list args)
{
	char character = va_arg(args, int);

	write(1, &character, 1);
	return (0);
}

/**
 * print_percent- Print a percentage symbol
 *
 * @args: va_list like argument
 *
 * Return: 0;
 */

int print_percent(va_list args __attribute__((unused)))
{
	_putchar('%');
	return (0);
}
