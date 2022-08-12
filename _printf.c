#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string containing the characters and the specifiers
 * Description: this function will call the get_print() function that will
 * determine which printing function to call depending on the conversion
 * specifiers contained into fmt
 * Return: length of the formatted output string
 */
int _printf(const char *format, ...)
{
	va_list arguments;
	int i = 0, count = 0, add = 0;
	operation_t p = {0, NULL};

	va_start(arguments, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			p = ch_option(format[i + 1]);
			if (p.flag == 1)
			{
				add = p.print(arguments);
				count += add;
				i += 1;
				continue;
			}
		}
		_putchar(format[i]);
		count++;
	}

	va_end(arguments);
	return (count);
}
