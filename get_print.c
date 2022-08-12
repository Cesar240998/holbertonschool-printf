#include "main.h"

/**
 * choose_option - Find if the flag match with an existence and
 * give the correct function.
 *
 * @s: Character to pass
 *
 * Return: A print_operation struct with a flag (0 or 1
 * and a function pointer or NULL.
 */

operation_t ch_option(char s)
{
	operation_t test = {0, NULL};
	special_chars_t options[] = {
		{'d', print_int},
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'%', print_percent},
		{'\0', NULL}
	};
	int i = 0;

	while (options[i].op)
	{
		if (options[i].op == s)
		{
			test.flag = 1;
			test.print = options[i].operation;
			return (test);
		}
		i++;
	}
	return (test);
}
