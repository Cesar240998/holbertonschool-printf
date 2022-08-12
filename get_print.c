#include "main.h"

/**
 * ch_option - Find if the flag match with an existence and
 * give the correct function.
 *
 * @s: Character to pass
 *
 * Return: A print_operation struct with a flag (0 or 1
 * and a function pointer or NULL.
 */

validates_t ch_option(char s)
{
	validates_t result = {0, NULL};
	specifiers_t options[] = {
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
			result.flag = 1;
			result.print = options[i].oper;
			return (result);
		}
		i++;
	}
	return (result);
}
